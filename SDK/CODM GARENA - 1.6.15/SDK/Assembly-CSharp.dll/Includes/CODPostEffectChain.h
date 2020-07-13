#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CODPostEffectChain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CODPostEffectChain"));
	}

	template <typename T = int32_t> static T& MaxGhosts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinDownscales() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxDownscales() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxGaussian() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_upscaleWeights() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mAmplifyBloomMat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_bloomRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_bloomParams() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mUseAmplifyBloom() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& k_MaxPyramidBlurLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_prefiltered() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BlurBuffer1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BlurBuffer2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mBloomMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mUseBloom() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mRTFormat() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mDeviceLevel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_Profile() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& CUSTOMSHADOWMAPCAMERADEPTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& CULLINGMASK_SPLASHCLEARCAMERA() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mDofMaskMesh() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& mUseSimpleMode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mUseSimpleACES() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& mUseDistort() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = uintptr_t> T& mDistortMaterial() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& mUseRadBlur() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mRadBlurMaterial() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& mUseRealDOF() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& mRealDOFMaterial() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& mSimpleACESMat() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mDepthMaterial() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& DOFDownSample() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DOFDownSampleHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mUseDOF() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mDOFMaterial() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& mUseCameraNoise() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mNoiseMaterial() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mNoiseOffsets() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& mNoiseIndex() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& mNoiseInterval() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& mNoiseLastTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& mUseInterference() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& mInterferenceMaterial() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& mUseGrayScale() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& GrayScaleLerpRate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& mGrayScaleMaterial() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& mUseBlur() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mBlurMaterial() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_EMPRange() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& mUseEMP() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& mEMPMaterial() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& mMainRT() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& mMainRTDepth() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& mMainDepthCopy() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& mSecRT() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& mCurrentRT() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& mUIRT() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppList<int32_t>*> T& mTempTexList() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& endFadeTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& effectFadeState() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppString*> T& m_EffectTypeName() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& mUseSecRT() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& mRTFormatChanged() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = int32_t> T& mEffectFlag() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& mChanged() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& mFPCamera() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& mWorldCamera() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& mPostprocessCamera() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& mUICamera() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& mUIPerspectiveCamera() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& m_EffectSupportMask() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& UberEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& UberFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCommandBuffers() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mEffectTypeValues() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& mDeviceTarget() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> static T& useHWTM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& EnableCameraOpt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& mUseCameraOpt() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> static T& EnableAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15);
	}
	template <typename T = bool> static T& ENABLE_MEMORYLESS_RT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16);
	}
	template <typename T = bool> T& mSupport() {
		return *(T*)((uintptr_t)this + 0x13D);
	}
	template <typename T = uintptr_t> T& HDRFormat() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> static T& FallBackHDRFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& FallBackHDRFormat16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mUseOnePass() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& InLobby() {
		return *(T*)((uintptr_t)this + 0x145);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allCameras() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> static T& MAX_CAMERA_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& TRUE_HDR() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& _bSavePPRes() {
		return *(T*)((uintptr_t)this + 0x14D);
	}
	template <typename T = uintptr_t> T& _savePPRT() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& mDistortControl() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& m_UseDizzyBlur() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& DizzyBlurMaterial() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = bool> T& m_HasBegunDizzyBlur() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& accumulationTexture() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& mPostProcessMat() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& mUsePostProcessBloom() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& mMyLightShaftBloomHelper() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& mSunShaftBloomMat() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& sunShaftsMaterial() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& mUseBCGS() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& mUberMat() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& mUseLut2DBaker() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& mUseLut2D() {
		return *(T*)((uintptr_t)this + 0x185);
	}
	template <typename T = uintptr_t> T& m_InternalLdrLut() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& mUseSunshaft() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& mSunShaft() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& mLightPosition() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIDsAmplify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadMaterialsAmplify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParamAmplify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupAmplifyBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBloomMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectFadeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectInterpValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPostEffectProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyEffectConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDisableMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseHardwareTonemapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClearedCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDestroyRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeHDR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRTAntiAliasing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAntiAliasing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFullSreenRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFullScreenDepthRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFullSreenUIRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnablePostProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRTFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFinalPass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasNonUIEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEffectEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPPComandBuffers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnyRTEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRTEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupCameraRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWorldCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupUICommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePPCameraDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUICameraPreRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUICameraPostRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_applyBloomIntensity_ignoreSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_applyBloomThreshold_ignoreSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getNuclearBombBloomIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getBloomThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getBloomIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getNuclearBombBloomThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_applyBloomIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_applyBloomThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAutoExposure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCameraInLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleSimpleMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWorldCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePPCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SavePostProcessResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayReleaseTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostFinalPass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupRealDof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleDof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Distort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRadBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRadBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndRadBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RadBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDistort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndDistort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDizzyBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartDizzyBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndDizzyBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DizzyBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_useFrameBufferColorFetch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_useDepthStencilFetch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_useMainColorTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_useDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_useDepthTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ifForceOnePass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPPBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadMaterialsPPBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParamPPBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupPostProcessBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSunShaftBloomMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSunShaftBloomParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSunShaftBloomCommands_Deprecated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSunShaftBloomCommands() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParamBCGS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParamColorGrading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupColorGrading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInternalStripLut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseColorGrading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSunShaftMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGodRayParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGodRayCommands() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}

	template <typename T = void> T InitIDsAmplify() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A2EEC0))(this);
	}
	template <typename T = void> T PreloadMaterialsAmplify() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A2F1A8))(this);
	}
	template <typename T = void> T UpdateParamAmplify() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A2F4F8))(this);
	}
	template <typename T = void> T SetupAmplifyBloom(uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A2F810))(this, cb);
	}
	template <typename T = uintptr_t> T get_Bloom() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A2FE3C))(this);
	}
	template <typename T = bool> T get_UseBloom() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A2FF18))(this);
	}
	template <typename T = void> T set_UseBloom(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A2FF20))(this, value);
	}
	template <typename T = void> T InitBloomMaterial() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A2FF84))(this);
	}
	template <typename T = void> T SimpleBloom(uintptr_t from, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A30080))(this, from, cb);
	}
	template <typename T = bool> T get_UseSimpleMode() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30DC0))(this);
	}
	template <typename T = void> T set_UseSimpleMode(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30DC8))(this, value);
	}
	template <typename T = bool> T get_UseDistort() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30DD0))(this);
	}
	template <typename T = void> T set_UseDistort(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30DD8))(this, value);
	}
	template <typename T = bool> T get_UseRadBlur() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30DF8))(this);
	}
	template <typename T = uintptr_t> T get_RealDofsetting() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30E00))(this);
	}
	template <typename T = bool> T get_UseRealDOF() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30EDC))(this);
	}
	template <typename T = bool> T get_UseDOF() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30EE4))(this);
	}
	template <typename T = void> T set_UseDOF(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30EEC))(this, value);
	}
	template <typename T = bool> T get_UseCameraNoise() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30F0C))(this);
	}
	template <typename T = void> T set_UseCameraNoise(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30F14))(this, value);
	}
	template <typename T = bool> T get_UseInterference() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30F34))(this);
	}
	template <typename T = void> T set_UseInterference(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30F3C))(this, value);
	}
	template <typename T = bool> T get_UseGrayScale() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30F5C))(this);
	}
	template <typename T = void> T set_UseGrayScale(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30F64))(this, value);
	}
	template <typename T = bool> T get_UseBlur() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30F84))(this);
	}
	template <typename T = void> T set_UseBlur(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A30F8C))(this, value);
	}
	template <typename T = uintptr_t> T get_BlurSetting() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A30FAC))(this);
	}
	template <typename T = bool> T get_UseEMP() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A31088))(this);
	}
	template <typename T = void> T set_UseEMP(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A31090))(this, value);
	}
	template <typename T = uintptr_t> T get_EMPRange() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A310B0))(this);
	}
	template <typename T = void> T set_EMPRange(uintptr_t value) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A310C0))(this, value);
	}
	template <typename T = void> T UpdateEffectFadeState() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A310D8))(this);
	}
	template <typename T = float> T GetEffectInterpValue(float orig, float setVal) {
		return ((T (*)(CODPostEffectChain*, float, float))(Il2CppBase() + 0x3A3121C))(this, orig, setVal);
	}
	template <typename T = void> T ApplyPostEffectProfile(uintptr_t profile) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A31444))(this, profile);
	}
	template <typename T = void> T ApplyEffectConfig(uintptr_t config) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A317E8))(this, config);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A3199C))(0);
	}
	template <typename T = uintptr_t> T get_PostProcessCamera() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A31A4C))(this);
	}
	template <typename T = bool> T get_UseUber() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A31A54))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A31C7C))(this);
	}
	template <typename T = void> T InitializeSupport() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A322C0))(this);
	}
	template <typename T = int32_t> static T GetDisableMask(uintptr_t effect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A32518))(0, effect);
	}
	template <typename T = void> T PreloadMaterial() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A31FBC))(this);
	}
	template <typename T = bool> static T IsUseHardwareTonemapping() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A32640))(0);
	}
	template <typename T = uintptr_t> static T LoadMaterial(uintptr_t id) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A2F3D0))(0, id);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3284C))(this);
	}
	template <typename T = uintptr_t> T GetClearedCommandBuffer(uintptr_t type) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A32BDC))(this, type);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A32E38))(this);
	}
	template <typename T = void> T PreDestroyRT(uintptr_t rt) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A32F44))(this, rt);
	}
	template <typename T = void> T DestroyRT() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A330F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A33618))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A336EC))(this);
	}
	template <typename T = void> T ChangeHDR() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A33D08))(this);
	}
	template <typename T = bool> T UpdateRT() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A33E14))(this);
	}
	template <typename T = void> T UpdateRTAntiAliasing(uintptr_t rt) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A34B8C))(this, rt);
	}
	template <typename T = void> T UpdateAntiAliasing() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A34D84))(this);
	}
	template <typename T = uintptr_t> T CreateFullSreenRT(Il2CppString* inName) {
		return ((T (*)(CODPostEffectChain*, Il2CppString*))(Il2CppBase() + 0x3A34340))(this, inName);
	}
	template <typename T = uintptr_t> T CreateFullScreenDepthRT() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3458C))(this);
	}
	template <typename T = uintptr_t> T CreateFullSreenUIRT() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A34870))(this);
	}
	template <typename T = bool> T IsEnablePostProcess() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35138))(this);
	}
	template <typename T = void> T CheckSupport() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A315D0))(this);
	}
	template <typename T = void> T CheckRTFormat() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35214))(this);
	}
	template <typename T = bool> T IsFinalPass(uintptr_t type) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A354D8))(this, type);
	}
	template <typename T = bool> T HasEffect() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35648))(this);
	}
	template <typename T = bool> T HasNonUIEffect() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35724))(this);
	}
	template <typename T = bool> T UpdateFlag() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35800))(this);
	}
	template <typename T = bool> T IsEffectEnabled(uintptr_t type) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A35D50))(this, type);
	}
	template <typename T = void> T SetupMaterials() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35EB0))(this);
	}
	template <typename T = void> T ClearRT(uintptr_t cb, uintptr_t rt) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A3661C))(this, cb, rt);
	}
	template <typename T = void> T DoPass(uintptr_t type, uintptr_t cb, uintptr_t mat, int32_t pass) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A36774))(this, type, cb, mat, pass);
	}
	template <typename T = void> T ClearPPComandBuffers() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A36E30))(this);
	}
	template <typename T = bool> T AnyRTEffect() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A36D54))(this);
	}
	template <typename T = bool> T IsRTEffect(uintptr_t type) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A36C08))(this, type);
	}
	template <typename T = void> T SetupCommandBuffer() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A36F80))(this);
	}
	template <typename T = void> T SetupCameraRT(bool hasNonUIEffect) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A37090))(this, hasNonUIEffect);
	}
	template <typename T = void> T SetupWorldCommandBuffer() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A37784))(this);
	}
	template <typename T = void> T SetupUICommandBuffer() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A37EA4))(this);
	}
	template <typename T = void> T UpdatePPCameraDepth() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A37494))(this);
	}
	template <typename T = void> T OnUICameraPreRender(uintptr_t cam) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A3A07C))(this, cam);
	}
	template <typename T = void> T OnUICameraPostRender(uintptr_t cam) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A3A1E4))(this, cam);
	}
	template <typename T = void> T applyBloomIntensity_ignoreSetting(float intensity) {
		return ((T (*)(CODPostEffectChain*, float))(Il2CppBase() + 0x3A3A340))(this, intensity);
	}
	template <typename T = void> T applyBloomThreshold_ignoreSetting(float threshold) {
		return ((T (*)(CODPostEffectChain*, float))(Il2CppBase() + 0x3A3A55C))(this, threshold);
	}
	template <typename T = float> T getNuclearBombBloomIntensity() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3A718))(this);
	}
	template <typename T = float> T getBloomThreshold() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3A808))(this);
	}
	template <typename T = float> T getBloomIntensity() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3A8F8))(this);
	}
	template <typename T = float> T getNuclearBombBloomThreshold() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3A9E8))(this);
	}
	template <typename T = void> T applyBloomIntensity() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3AAD8))(this);
	}
	template <typename T = void> T applyBloomThreshold() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3AD0C))(this);
	}
	template <typename T = void> T UpdateAutoExposure(bool force) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A3AED0))(this, force);
	}
	template <typename T = void> T UpdateParam(bool force) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A3B038))(this, force);
	}
	template <typename T = void> T UpdateCameraInLobby() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3C458))(this);
	}
	template <typename T = void> T ToggleSimpleMode(bool simpleMode) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A3CAEC))(this, simpleMode);
	}
	template <typename T = void> T ChangeWorldCamera(uintptr_t newCamera) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A3CBE8))(this, newCamera);
	}
	template <typename T = void> T ChangePPCamera(uintptr_t newCamera) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A3CE78))(this, newCamera);
	}
	template <typename T = void> T UpdateCamera() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3CF60))(this);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3D1B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A34E68))(this);
	}
	template <typename T = void> T SavePostProcessResult(uintptr_t rt, bool bOpen) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, bool))(Il2CppBase() + 0x3A3D288))(this, rt, bOpen);
	}
	template <typename T = void> T DelayReleaseTex(int32_t texID) {
		return ((T (*)(CODPostEffectChain*, int32_t))(Il2CppBase() + 0x3A2FD2C))(this, texID);
	}
	template <typename T = void> T PostFinalPass(uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A39E64))(this, cb);
	}
	template <typename T = void> T SetupRealDof(uintptr_t sourceRT, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A38E1C))(this, sourceRT, cb);
	}
	template <typename T = void> T SimpleDof(uintptr_t from, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A3929C))(this, from, cb);
	}
	template <typename T = void> T Distort(uintptr_t from, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A38958))(this, from, cb);
	}
	template <typename T = void> T StartRadBlur(float strength) {
		return ((T (*)(CODPostEffectChain*, float))(Il2CppBase() + 0x3A3D394))(this, strength);
	}
	template <typename T = void> T UpdateRadBlur(float strength) {
		return ((T (*)(CODPostEffectChain*, float))(Il2CppBase() + 0x3A3D500))(this, strength);
	}
	template <typename T = void> T EndRadBlur() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3D6BC))(this);
	}
	template <typename T = void> T RadBlur(uintptr_t from, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A38A60))(this, from, cb);
	}
	template <typename T = void> T StartDistort(float strength, Il2CppVector2 speed) {
		return ((T (*)(CODPostEffectChain*, float, Il2CppVector2))(Il2CppBase() + 0x3A3D7A0))(this, strength, speed);
	}
	template <typename T = void> T EndDistort() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3D9DC))(this);
	}
	template <typename T = bool> T get_UseDizzyBlur() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35D48))(this);
	}
	template <typename T = void> T set_UseDizzyBlur(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A3DB20))(this, value);
	}
	template <typename T = uintptr_t> T get_DizzySetting() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3BA40))(this);
	}
	template <typename T = void> T UpdateDizzyBlur(float blurAmount, float BgColor) {
		return ((T (*)(CODPostEffectChain*, float, float))(Il2CppBase() + 0x3A3DB28))(this, blurAmount, BgColor);
	}
	template <typename T = void> T StartDizzyBlur(float blurAmount, float BgColor) {
		return ((T (*)(CODPostEffectChain*, float, float))(Il2CppBase() + 0x3A3DD3C))(this, blurAmount, BgColor);
	}
	template <typename T = void> T EndDizzyBlur() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3DF4C))(this);
	}
	template <typename T = void> T DizzyBlur(uintptr_t from, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A38B68))(this, from, cb);
	}
	template <typename T = bool> T useFrameBufferColorFetch() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3E044))(this);
	}
	template <typename T = bool> T useDepthStencilFetch() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A34A4C))(this);
	}
	template <typename T = bool> T useMainColorTexture() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A34268))(this);
	}
	template <typename T = bool> T useDepth() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3E1B8))(this);
	}
	template <typename T = bool> T useDepthTexture() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A34774))(this);
	}
	template <typename T = bool> T ifForceOnePass() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A353D8))(this);
	}
	template <typename T = void> T InitPPBloom() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3E28C))(this);
	}
	template <typename T = void> T PreloadMaterialsPPBloom() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3E518))(this);
	}
	template <typename T = void> T UpdateParamPPBloom() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3E6BC))(this);
	}
	template <typename T = void> T SetupPostProcessBloom(uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A3EB50))(this, cb);
	}
	template <typename T = void> T set_MyLightShaftBloomHelper(uintptr_t value) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A3F370))(this, value);
	}
	template <typename T = void> T InitSunShaftBloomMaterial() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3F378))(this);
	}
	template <typename T = void> T UpdateSunShaftBloomParams() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3F6CC))(this);
	}
	template <typename T = void> T AddSunShaftBloomCommands_Deprecated(uintptr_t rt, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A3FC48))(this, rt, cb);
	}
	template <typename T = void> T AddSunShaftBloomCommands(uintptr_t rt, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A3FEE8))(this, rt, cb);
	}
	template <typename T = void> T UpdateParamBCGS() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3C324))(this);
	}
	template <typename T = void> T UpdateParamColorGrading() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3BF7C))(this);
	}
	template <typename T = void> T SetupColorGrading(uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t))(Il2CppBase() + 0x3A39B44))(this, cb);
	}
	template <typename T = void> T CheckInternalStripLut() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A40888))(this);
	}
	template <typename T = void> T ReleaseColorGrading() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A33C24))(this);
	}
	template <typename T = bool> T get_UseSunshaft() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A35D40))(this);
	}
	template <typename T = void> T set_UseSunshaft(bool value) {
		return ((T (*)(CODPostEffectChain*, bool))(Il2CppBase() + 0x3A40A2C))(this, value);
	}
	template <typename T = void> T InitSunShaftMaterial() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A364F4))(this);
	}
	template <typename T = void> T UpdateGodRayParam() {
		return ((T (*)(CODPostEffectChain*))(Il2CppBase() + 0x3A3BB1C))(this);
	}
	template <typename T = void> T AddGodRayCommands(uintptr_t rt, uintptr_t cb) {
		return ((T (*)(CODPostEffectChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A3835C))(this, rt, cb);
	}

};

}
