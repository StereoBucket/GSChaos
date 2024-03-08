/**
 * Copyright - ScriptedSnark, 2024.
 * CFeatureJeepy.h - description
 *
 * Project (Project desc) header file
 * Authors: ScriptedSnark.
 * Do not delete this comment block. Respect others' work!
 */

#ifdef CFEATUREJEEPY_H_RECURSE_GUARD
#error Recursive header files inclusion detected in CFeatureJeepy.h
#else //CFEATUREJEEPY_H_RECURSE_GUARD

#define CFEATUREJEEPY_H_RECURSE_GUARD

#ifndef CFEATUREJEEPY_H_GUARD
#define CFEATUREJEEPY_H_GUARD
#pragma once

#ifdef __cplusplus

class CFeatureJeepy : public CFeatureForgotCSS
{
	void Init() override;
	void ActivateFeature();
	int GetTextureID() override;
	const char* GetFeatureName() override;
private:
	GLuint m_iJeepyID;
};

#else //!__cplusplus
#error C++ compiler required to compile CFeatureJeepy.h
#endif //__cplusplus

#endif //CFEATUREJEEPY_H_GUARD

#undef CFEATUREJEEPY_H_RECURSE_GUARD
#endif //CFEATUREJEEPY_H_RECURSE_GUARD