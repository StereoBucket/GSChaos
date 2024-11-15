#include "includes.h"

bool g_bActivatedRollin;

void CFeatureRollin::Init()
{
	CChaosFeature::Init();
}

void CFeatureRollin::ActivateFeature()
{
	CChaosFeature::ActivateFeature();
	g_bActivatedRollin = true;
}

void CFeatureRollin::DeactivateFeature()
{
	CChaosFeature::DeactivateFeature();
	g_bActivatedRollin = false;

	Vector viewAngles;
	pEngfuncs->GetViewAngles(viewAngles);
	viewAngles.z = 0;
	pEngfuncs->SetViewAngles(viewAngles);
}

void CFeatureRollin::V_CalcRefdef(struct ref_params_s* pparams)
{
	pparams->viewangles[2] += 0.1f;
	pparams->cl_viewangles[2] = pparams->viewangles[2];
}

const char* CFeatureRollin::GetFeatureName()
{
	return "Rollin'";
}

double CFeatureRollin::GetDuration()
{
	return gChaos.GetChaosTime() * 0.9;
}

bool CFeatureRollin::UseCustomDuration()
{
	return true;
}

bool CFeatureRollin::CanBeInfinite()
{
	return true;
}