/**
 * Copyright - ScriptedSnark, 2024.
 * CFeatureGiveRandomWeapon.h
 *
 * Project (GSChaos) header file
 * Authors: ScriptedSnark.
 * Do not delete this comment block. Respect others' work!
 */

#ifdef CFEATUREGIVERANDOMWEAPON_H_RECURSE_GUARD
#error Recursive header files inclusion detected in CFeatureGiveRandomWeapon.h
#else //CFEATUREGIVERANDOMWEAPON_H_RECURSE_GUARD

#define CFEATUREGIVERANDOMWEAPON_H_RECURSE_GUARD

#ifndef CFEATUREGIVERANDOMWEAPON_H_GUARD
#define CFEATUREGIVERANDOMWEAPON_H_GUARD
#pragma once

#ifdef __cplusplus

class CFeatureGiveRandomWeapon : public CChaosFeature
{
	void Init() override;
	void ActivateFeature() override;
	void DeactivateFeature() override;
	const char* GetFeatureName() override;
	bool IsGood() override;
private:
	const char* m_pszWeaponName;
};

#else //!__cplusplus
#error C++ compiler required to compile CFeatureGiveRandomWeapon.h
#endif //__cplusplus

#endif //CFEATUREGIVERANDOMWEAPON_H_GUARD

#undef CFEATUREGIVERANDOMWEAPON_H_RECURSE_GUARD
#endif //CFEATUREGIVERANDOMWEAPON_H_RECURSE_GUARD