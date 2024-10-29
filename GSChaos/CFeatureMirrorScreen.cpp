#include "includes.h"

bool g_bActivatedMirror;

void CFeatureMirrorScreen::Init()
{
	CChaosFeature::Init();
}

void CFeatureMirrorScreen::ActivateFeature()
{
	CChaosFeature::ActivateFeature();
	g_bActivatedMirror = true;
}

void CFeatureMirrorScreen::DeactivateFeature()
{
	CChaosFeature::DeactivateFeature();
	g_bActivatedMirror = false;
}

const char* CFeatureMirrorScreen::GetFeatureName()
{
	return "rorriM";
}

double CFeatureMirrorScreen::GetDuration()
{
	return gChaos.GetChaosTime() * 1.08;
}

bool CFeatureMirrorScreen::UseCustomDuration()
{
	return true;
}

void CFeatureMirrorScreen::SwapBuffers()
{
	int width = ImGui::GetIO().DisplaySize.x;
	int height = ImGui::GetIO().DisplaySize.y;

	glBlendFunc(GL_SRC_ALPHA, GL_ZERO);
	glEnable(GL_BLEND);

	// bind texture
	glBindTexture(GL_TEXTURE_RECTANGLE_NV, 32767);
	glCopyTexImage2D(GL_TEXTURE_RECTANGLE_NV, 0, GL_RGBA8, 0, 0, width, height, 0);

	// enable some OpenGL stuff
	glEnable(GL_TEXTURE_RECTANGLE_NV);
	glColor3f(1, 1, 1);
	glDisable(GL_DEPTH_TEST);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();

	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	glOrtho(0, 1, 1, 0, 0.1, 100);

	glBindTexture(GL_TEXTURE_RECTANGLE_NV, 32767);

	glColor4f(1, 1, 1, 1);

	glBegin(GL_QUADS);

	glTexCoord2f(width, 0);
	glVertex3f(0, 1, -1);
	glTexCoord2f(width, height);
	glVertex3f(0, 0, -1);
	glTexCoord2f(0, height);
	glVertex3f(1, 0, -1);
	glTexCoord2f(0, 0);
	glVertex3f(1, 1, -1);

	glEnd();

	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

	glDisable(GL_TEXTURE_RECTANGLE_NV);
	glEnable(GL_DEPTH_TEST);


	glDisable(GL_BLEND);
}

bool CFeatureMirrorScreen::CanBeInfinite()
{
	return true;
}