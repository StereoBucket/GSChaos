#include "includes.h"

void CFeatureWaterIsALie::Init()
{
	CChaosFeature::Init();
}

void CFeatureWaterIsALie::ActivateFeature()
{
	CChaosFeature::ActivateFeature();
	g_bActivatedDisableWater = true;
}

void CFeatureWaterIsALie::DeactivateFeature()
{
	CChaosFeature::DeactivateFeature();
	g_bActivatedDisableWater = false;
}

const char* CFeatureWaterIsALie::GetFeatureName()
{
	return "Water is a lie";
}