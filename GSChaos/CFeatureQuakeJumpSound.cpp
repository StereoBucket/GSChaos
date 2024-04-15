#include "includes.h"

void CFeatureQuakeJumpSound::Init()
{
	CChaosFeature::Init();
}

void CFeatureQuakeJumpSound::ActivateFeature()
{
	CChaosFeature::ActivateFeature();
}

void CFeatureQuakeJumpSound::DeactivateFeature()
{
	CChaosFeature::DeactivateFeature();
}

void CFeatureQuakeJumpSound::PM_Jump()
{
	pEngfuncs->pfnClientCmd(";spk ../../chaos/plyrjmp8;");
}

const char* CFeatureQuakeJumpSound::GetFeatureName()
{
	return "Quake jump sound";
}