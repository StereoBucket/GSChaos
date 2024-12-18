#include "includes.h"

void CFeatureWorstBhopCap::Init()
{
	CChaosFeature::Init();
}

void CFeatureWorstBhopCap::ActivateFeature()
{
	CChaosFeature::ActivateFeature();
}

void CFeatureWorstBhopCap::DeactivateFeature()
{
	CChaosFeature::DeactivateFeature();
}

void CFeatureWorstBhopCap::PM_Jump()
{
	// xdd
	g_svpmove->velocity.x *= 0.5f;
	g_svpmove->velocity.y *= 0.5f;
}

const char* CFeatureWorstBhopCap::GetFeatureName()
{
	return "Worst Bhop Cap";
}

double CFeatureWorstBhopCap::GetDuration()
{
	return gChaos.GetChaosTime() * 1.2;
}

bool CFeatureWorstBhopCap::UseCustomDuration()
{
	return true;
}

bool CFeatureWorstBhopCap::CanBeInfinite()
{
	return true;
}