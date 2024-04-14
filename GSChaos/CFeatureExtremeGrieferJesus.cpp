#include "includes.h"

void CFeatureExtremeGrieferJesus::ActivateFeature()
{
	CChaosFeature::ActivateFeature();

	if (m_bActivated)
		return;

	m_flTimeForSpawn = gChaos.GetGlobalTime() + 38.0;
	m_bActivated = true;
	m_bSpawned = false;

	ma_engine_play_sound(&miniAudio, "chaos/egj.mp3", NULL);
}

void CFeatureExtremeGrieferJesus::OnFrame(double time)
{
	if (m_bSpawned)
	{
		CFeatureExtremeGrieferShephard::OnFrame(time);
	}

	if (!m_bActivated)
		return;

	if (m_flTimeForSpawn > gChaos.GetGlobalTime())
	{
		CChaosFeature::OnFrame(time);
		return;
	}
	else
	{
		Spawn();
		m_flDespawnTime = gChaos.GetGlobalTime() + 180.0;
		m_bActivated = false;
	}
}

const char* CFeatureExtremeGrieferJesus::GetFeatureName()
{
	return "He comes back.";
}

const char* CFeatureExtremeGrieferJesus::GetModelName()
{
	return "../chaos/egj.mdl";
}

const char* CFeatureExtremeGrieferJesus::GetClassname()
{
	return "chaos_exgriefer_jesus";
}

bool CFeatureExtremeGrieferJesus::UseRenderFX()
{
	return false;
}