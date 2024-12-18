#include "includes.h"

void CFeatureLongJump::Init()
{
	CChaosFeature::Init();
}

void CFeatureLongJump::ActivateFeature()
{
	CChaosFeature::ActivateFeature();
}

void CFeatureLongJump::DeactivateFeature()
{
	CChaosFeature::DeactivateFeature();
}

void CFeatureLongJump::PM_Jump()
{
	g_svpmove->velocity.x *= 2.0f;
	g_svpmove->velocity.y *= 2.0f;
}

const char* CFeatureLongJump::GetFeatureName()
{
	return "Long Jump";
}

double CFeatureLongJump::GetDuration()
{
	return gChaos.GetChaosTime() * 0.75;
}

bool CFeatureLongJump::UseCustomDuration()
{
	return true;
}

bool CFeatureLongJump::CanBeInfinite()
{
	return true;
}