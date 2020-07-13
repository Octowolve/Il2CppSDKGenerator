#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundEnginePINVOKE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundEnginePINVOKE"));
	}


	template <typename T = uint32_t> static T CSharp_AK_SOUNDBANK_VERSION_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255998))(0);
	}
	template <typename T = void> static T CSharp_AkExternalSourceInfo_iExternalSrcCookie_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2280204))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkExternalSourceInfo_iExternalSrcCookie_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22802EC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkExternalSourceInfo_idCodec_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22803CC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkExternalSourceInfo_idCodec_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22804B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkExternalSourceInfo_szFile_set(uintptr_t jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2280594))(0, jarg1, jarg2);
	}
	template <typename T = Il2CppString*> static T CSharp_AkExternalSourceInfo_szFile_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22806A0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkExternalSourceInfo_pInMemory_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2280798))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkExternalSourceInfo_pInMemory_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2280880))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkExternalSourceInfo_uiMemorySize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2280960))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkExternalSourceInfo_uiMemorySize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2280A48))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkExternalSourceInfo_idFile_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2280B28))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkExternalSourceInfo_idFile_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2280C10))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkExternalSourceInfo__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x2280CF0))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkExternalSourceInfo__SWIG_1(uintptr_t jarg1, uint32_t jarg2, uint32_t jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x2280DC0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkExternalSourceInfo__SWIG_2(Il2CppString* jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint32_t))(Il2CppBase() + 0x2280EB4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkExternalSourceInfo__SWIG_3(uint32_t jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x2280FCC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_delete_AkExternalSourceInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22810BC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkVector_Zero(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228119C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkVector_X_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x228127C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkVector_X_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2281364))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkVector_Y_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2281444))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkVector_Y_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228152C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkVector_Z_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x228160C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkVector_Z_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22816F4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkVector() {
		return ((T (*)(void *))(Il2CppBase() + 0x22817D4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkVector(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22818A4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkTransform_Position(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2281984))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkTransform_OrientationFront(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2281A64))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkTransform_OrientationTop(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2281B44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTransform_Set__SWIG_0(uintptr_t jarg1, uintptr_t jarg2, uintptr_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2281C24))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = void> static T CSharp_AkTransform_Set__SWIG_1(uintptr_t jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10) {
		return ((T (*)(void *, uintptr_t, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x2281D18))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8, jarg9, jarg10);
	}
	template <typename T = void> static T CSharp_AkTransform_SetPosition__SWIG_0(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2281E40))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkTransform_SetPosition__SWIG_1(uintptr_t jarg1, float jarg2, float jarg3, float jarg4) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x2281F28))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = void> static T CSharp_AkTransform_SetOrientation__SWIG_0(uintptr_t jarg1, uintptr_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2282020))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AkTransform_SetOrientation__SWIG_1(uintptr_t jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7) {
		return ((T (*)(void *, uintptr_t, float, float, float, float, float, float))(Il2CppBase() + 0x2282110))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkTransform() {
		return ((T (*)(void *))(Il2CppBase() + 0x2282220))(0);
	}
	template <typename T = void> static T CSharp_delete_AkTransform(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22822F0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkObstructionOcclusionValues_occlusion_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22823D0))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkObstructionOcclusionValues_occlusion_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22824B8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkObstructionOcclusionValues_obstruction_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2282598))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkObstructionOcclusionValues_obstruction_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2282680))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkObstructionOcclusionValues() {
		return ((T (*)(void *))(Il2CppBase() + 0x2282760))(0);
	}
	template <typename T = void> static T CSharp_delete_AkObstructionOcclusionValues(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2282830))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkChannelEmitter_position_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2282910))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkChannelEmitter_position_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22829F8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkChannelEmitter_uInputChannels_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2282AD8))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkChannelEmitter_uInputChannels_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2282BC0))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkChannelEmitter() {
		return ((T (*)(void *))(Il2CppBase() + 0x2282CA0))(0);
	}
	template <typename T = void> static T CSharp_delete_AkChannelEmitter(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2282D70))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAuxSendValue_listenerID_set(uintptr_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x2282E50))(0, jarg1, jarg2);
	}
	template <typename T = uint64_t> static T CSharp_AkAuxSendValue_listenerID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2282F40))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAuxSendValue_auxBusID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2283020))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAuxSendValue_auxBusID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2283108))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAuxSendValue_fControlValue_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22831E8))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkAuxSendValue_fControlValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22832D0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAuxSendValue_Set(uintptr_t jarg1, uint64_t jarg2, uint32_t jarg3, float jarg4) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint32_t, float))(Il2CppBase() + 0x22833B0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = bool> static T CSharp_AkAuxSendValue_IsSame(uintptr_t jarg1, uint64_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint32_t))(Il2CppBase() + 0x22834B0))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_AkAuxSendValue_GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x22835B0))(0);
	}
	template <typename T = int32_t> static T CSharp_AkAuxSendValue_SetGameObjectAuxSendValues(uintptr_t jarg1, uint64_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint32_t))(Il2CppBase() + 0x2283680))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_AkAuxSendValue_GetGameObjectAuxSendValues(uintptr_t jarg1, uint64_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x2283778))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_delete_AkAuxSendValue(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2283870))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkRamp__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x2283950))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkRamp__SWIG_1(float jarg1, float jarg2) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x2283A20))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkRamp_fPrev_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2283B08))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkRamp_fPrev_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2283BF0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRamp_fNext_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2283CD0))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkRamp_fNext_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2283DB8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkRamp(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2283E98))(0, jarg1);
	}
	template <typename T = uint16_t> static T CSharp_AK_INT_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255B00))(0);
	}
	template <typename T = uint16_t> static T CSharp_AK_FLOAT_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255C68))(0);
	}
	template <typename T = unsigned char> static T CSharp_AK_INTERLEAVED_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255DD0))(0);
	}
	template <typename T = unsigned char> static T CSharp_AK_NONINTERLEAVED_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2255F38))(0);
	}
	template <typename T = uint32_t> static T CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x22560A0))(0);
	}
	template <typename T = uint32_t> static T CSharp_AK_LE_NATIVE_SAMPLETYPE_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2256208))(0);
	}
	template <typename T = uint32_t> static T CSharp_AK_LE_NATIVE_INTERLEAVE_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2256370))(0);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_uSampleRate_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2283F78))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_uSampleRate_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284060))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_channelConfig_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2284140))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkAudioFormat_channelConfig_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284228))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_uBitsPerSample_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2284308))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_uBitsPerSample_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22843F0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_uBlockAlign_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22844D0))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_uBlockAlign_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22845B8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_uTypeID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2284698))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_uTypeID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284780))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_uInterleaveID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2284860))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_uInterleaveID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284948))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_GetNumChannels(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284A28))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_GetBitsPerSample(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284B08))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_GetBlockAlign(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284BE8))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_GetTypeID(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284CC8))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioFormat_GetInterleaveID(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284DA8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioFormat_SetAll(uintptr_t jarg1, uint32_t jarg2, uintptr_t jarg3, uint32_t jarg4, uint32_t jarg5, uint32_t jarg6, uint32_t jarg7) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x2284E88))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = bool> static T CSharp_AkAudioFormat_IsChannelConfigSupported(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2284F94))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkAudioFormat() {
		return ((T (*)(void *))(Il2CppBase() + 0x228507C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkAudioFormat(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228514C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkIterator_pItem_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228522C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkIterator_pItem_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2285314))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkIterator_NextIter(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22853F4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkIterator_PrevIter(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22854D4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkIterator_GetItem(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22855B4))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkIterator_IsEqualTo(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2285694))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkIterator_IsDifferentFrom(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2285784))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkIterator() {
		return ((T (*)(void *))(Il2CppBase() + 0x2285874))(0);
	}
	template <typename T = void> static T CSharp_delete_AkIterator(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2285944))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp__ArrayPoolDefault_Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2285A24))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new__ArrayPoolDefault() {
		return ((T (*)(void *))(Il2CppBase() + 0x2285AF4))(0);
	}
	template <typename T = void> static T CSharp_delete__ArrayPoolDefault(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2285BC4))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp__ArrayPoolLEngineDefault_Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2285CA4))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new__ArrayPoolLEngineDefault() {
		return ((T (*)(void *))(Il2CppBase() + 0x2285D74))(0);
	}
	template <typename T = void> static T CSharp_delete__ArrayPoolLEngineDefault(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2285E44))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPlaylistItem__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x2285F24))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPlaylistItem__SWIG_1(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2285FF4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkPlaylistItem(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22860D4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistItem_Assign(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22861B4))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPlaylistItem_IsEqualTo(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228629C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylistItem_SetExternalSources(uintptr_t jarg1, uint32_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x228638C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AkPlaylistItem_audioNodeID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228647C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkPlaylistItem_audioNodeID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2286564))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlaylistItem_msDelay_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2286644))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylistItem_msDelay_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228672C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlaylistItem_pCustomInfo_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228680C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistItem_pCustomInfo_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22868F4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPlaylistArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x22869D4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkPlaylistArray(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2286AA4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_Begin(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2286B84))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_End(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2286C64))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_FindEx(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2286D44))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_Erase__SWIG_0(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2286E2C))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkPlaylistArray_Erase__SWIG_1(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2286F14))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_EraseSwap(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2286FFC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylistArray_Reserve(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22870E4))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkPlaylistArray_Reserved(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22871CC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlaylistArray_Term(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22872AC))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkPlaylistArray_Length(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228738C))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkPlaylistArray_IsEmpty(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228746C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_Exists(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2287554))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_AddLast__SWIG_0(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228763C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_AddLast__SWIG_1(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228771C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_Last(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2287804))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlaylistArray_RemoveLast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22878E4))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylistArray_Remove(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22879C4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylistArray_RemoveSwap(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2287AAC))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkPlaylistArray_RemoveAll(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2287B94))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_ItemAtIndex(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2287C74))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylistArray_Insert(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2287D5C))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPlaylistArray_GrowArray__SWIG_0(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2287E44))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPlaylistArray_GrowArray__SWIG_1(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2287F34))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkPlaylistArray_Resize(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228801C))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkPlaylistArray_Transfer(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228810C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylistArray_Copy(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22881F4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylist_Enqueue__SWIG_0(uintptr_t jarg1, uint32_t jarg2, int32_t jarg3, uintptr_t jarg4, uint32_t jarg5, uintptr_t jarg6) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x22882DC))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylist_Enqueue__SWIG_1(uintptr_t jarg1, uint32_t jarg2, int32_t jarg3, uintptr_t jarg4, uint32_t jarg5) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x22883E0))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylist_Enqueue__SWIG_2(uintptr_t jarg1, uint32_t jarg2, int32_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x22884DC))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylist_Enqueue__SWIG_3(uintptr_t jarg1, uint32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x22885D0))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_AkPlaylist_Enqueue__SWIG_4(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22886C0))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPlaylist() {
		return ((T (*)(void *))(Il2CppBase() + 0x22887A8))(0);
	}
	template <typename T = void> static T CSharp_delete_AkPlaylist(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2288878))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_DynamicSequenceOpen__SWIG_0(uint64_t jarg1, uint32_t jarg2, uintptr_t jarg3, uintptr_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, uint64_t, uint32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2256730))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = uint32_t> static T CSharp_DynamicSequenceOpen__SWIG_1(uint64_t jarg1, uint32_t jarg2, uintptr_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, uint64_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2256A3C))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = uint32_t> static T CSharp_DynamicSequenceOpen__SWIG_2(uint64_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint64_t, uint32_t))(Il2CppBase() + 0x2256C80))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_DynamicSequenceOpen__SWIG_3(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2256EB0))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceClose(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2257038))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequencePlay__SWIG_0(uint32_t jarg1, int32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x22571D0))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequencePlay__SWIG_1(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2257368))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequencePlay__SWIG_2(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22574F0))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequencePause__SWIG_0(uint32_t jarg1, int32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x2257688))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequencePause__SWIG_1(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2257820))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequencePause__SWIG_2(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22579A8))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceResume__SWIG_0(uint32_t jarg1, int32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x2257B40))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceResume__SWIG_1(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2257CD8))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceResume__SWIG_2(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2257E60))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceStop__SWIG_0(uint32_t jarg1, int32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x2257FF8))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceStop__SWIG_1(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2258190))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceStop__SWIG_2(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2258318))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceBreak(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2258498))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceGetPauseTimes(uint32_t jarg1, uintptr_t* jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2258630))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = uintptr_t> static T CSharp_DynamicSequenceLockPlaylist(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2258858))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_DynamicSequenceUnlockPlaylist(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22589D8))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkOutputSettings__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x2288958))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkOutputSettings__SWIG_1(Il2CppString* jarg1, uint32_t jarg2, uintptr_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2288A28))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkOutputSettings__SWIG_2(Il2CppString* jarg1, uint32_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uintptr_t))(Il2CppBase() + 0x2288B48))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkOutputSettings__SWIG_3(Il2CppString* jarg1, uint32_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x2288C60))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkOutputSettings__SWIG_4(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2288D70))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkOutputSettings_audioDeviceShareset_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2288E78))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkOutputSettings_audioDeviceShareset_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2288F60))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkOutputSettings_idDevice_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2289040))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkOutputSettings_idDevice_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289128))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkOutputSettings_ePanningRule_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2289208))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkOutputSettings_ePanningRule_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22892F0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkOutputSettings_channelConfig_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22893D0))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkOutputSettings_channelConfig_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22894B8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkOutputSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289598))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_pfnAssertHook_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2289678))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkInitSettings_pfnAssertHook_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289760))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uMaxNumPaths_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2289840))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uMaxNumPaths_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289928))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uDefaultPoolSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2289A08))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uDefaultPoolSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289AF0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2289BD0))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289CB8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uCommandQueueSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2289D98))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uCommandQueueSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2289E80))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2289F60))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228A048))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_bEnableGameSyncPreparation_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x228A128))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkInitSettings_bEnableGameSyncPreparation_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228A210))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228A2F8))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228A3E0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uNumSamplesPerFrame_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228A4C0))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uNumSamplesPerFrame_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228A5A8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uMonitorPoolSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228A688))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uMonitorPoolSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228A770))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uMonitorQueuePoolSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228A850))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uMonitorQueuePoolSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228A938))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_settingsMainOutput_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228AA18))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkInitSettings_settingsMainOutput_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228AB00))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228ABE0))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228ACC8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_bUseSoundBankMgrThread_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x228ADA8))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkInitSettings_bUseSoundBankMgrThread_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228AE90))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_bUseLEngineThread_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x228AF78))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkInitSettings_bUseLEngineThread_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228B060))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkInitSettings_szPluginDLLPath_set(uintptr_t jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x228B148))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkInitSettings_szPluginDLLPath_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228B254))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkInitSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x228B334))(0);
	}
	template <typename T = void> static T CSharp_delete_AkInitSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228B404))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSourceSettings_sourceID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228B4E4))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSourceSettings_sourceID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228B5CC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSourceSettings_pMediaMemory_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228B6AC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSourceSettings_pMediaMemory_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228B794))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSourceSettings_uMediaSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228B874))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSourceSettings_uMediaSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228B95C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSourceSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x228BA3C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkSourceSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228BB0C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioSettings_uNumSamplesPerFrame_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228BBEC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioSettings_uNumSamplesPerFrame_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228BCD4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkAudioSettings_uNumSamplesPerSecond_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x228BDB4))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkAudioSettings_uNumSamplesPerSecond_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228BE9C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkAudioSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x228BF7C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkAudioSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C04C))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_IsInitialized() {
		return ((T (*)(void *))(Il2CppBase() + 0x2258B50))(0);
	}
	template <typename T = int32_t> static T CSharp_GetAudioSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2258CDC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_GetSpeakerConfiguration__SWIG_0(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2258EA8))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_GetSpeakerConfiguration__SWIG_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2259064))(0);
	}
	template <typename T = int32_t> static T CSharp_GetPanningRule__SWIG_0(uintptr_t* jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uintptr_t*, uint64_t))(Il2CppBase() + 0x22591EC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetPanningRule__SWIG_1(uintptr_t* jarg1) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x225938C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetPanningRule__SWIG_0(int32_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, int32_t, uint64_t))(Il2CppBase() + 0x2259534))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetPanningRule__SWIG_1(int32_t jarg1) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x22596C4))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetSpeakerAngles__SWIG_0(Il2CppArray<uintptr_t>** jarg1, uintptr_t jarg2, uintptr_t* jarg3, uint64_t jarg4) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>**, uintptr_t, uintptr_t*, uint64_t))(Il2CppBase() + 0x2259868))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_GetSpeakerAngles__SWIG_1(Il2CppArray<uintptr_t>** jarg1, uintptr_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>**, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2259A38))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetSpeakerAngles__SWIG_0(Il2CppArray<uintptr_t>* jarg1, uint32_t jarg2, float jarg3, uint64_t jarg4) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, float, uint64_t))(Il2CppBase() + 0x2259C04))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetSpeakerAngles__SWIG_1(Il2CppArray<uintptr_t>* jarg1, uint32_t jarg2, float jarg3) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t, float))(Il2CppBase() + 0x2259DC4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetVolumeThreshold(float jarg1) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2259F5C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetMaxNumVoicesLimit(uint16_t jarg1) {
		return ((T (*)(void *, uint16_t))(Il2CppBase() + 0x225A0DC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_RenderAudio__SWIG_0(bool jarg1) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x225A25C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_RenderAudio__SWIG_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x225A3D4))(0);
	}
	template <typename T = int32_t> static T CSharp_RegisterPluginDLL(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x225A544))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_GetIDFromString(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x225A6EC))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_0(uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uint32_t jarg6, uintptr_t jarg7, uint32_t jarg8) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225AA40))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_1(uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uint32_t jarg6, uintptr_t jarg7) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x225ADA8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_2(uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uint32_t jarg6) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225B0E4))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_3(uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x225B410))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_4(uint32_t jarg1, uint64_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x225B668))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_5(uint32_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint32_t, uint64_t))(Il2CppBase() + 0x225B8AC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_6(Il2CppString* jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uint32_t jarg6, uintptr_t jarg7, uint32_t jarg8) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225BBE8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_7(Il2CppString* jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uint32_t jarg6, uintptr_t jarg7) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x225BF7C))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_8(Il2CppString* jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uint32_t jarg6) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x225C2E4))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_9(Il2CppString* jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x225C634))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_10(Il2CppString* jarg1, uint64_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t))(Il2CppBase() + 0x225C8B0))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = uint32_t> static T CSharp_PostEvent__SWIG_11(Il2CppString* jarg1, uint64_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x225CB1C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_0(uint32_t jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5, uint32_t jarg6) {
		return ((T (*)(void *, uint32_t, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x225CD48))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_1(uint32_t jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, uint32_t, int32_t, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x225CF58))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_2(uint32_t jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint32_t, int32_t, uint64_t, int32_t))(Il2CppBase() + 0x225D15C))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_3(uint32_t jarg1, int32_t jarg2, uint64_t jarg3) {
		return ((T (*)(void *, uint32_t, int32_t, uint64_t))(Il2CppBase() + 0x225D354))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_4(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x225D4EC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_5(Il2CppString* jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5, uint32_t jarg6) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint64_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x225D6E8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_6(Il2CppString* jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x225D924))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_7(Il2CppString* jarg1, int32_t jarg2, uint64_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint64_t, int32_t))(Il2CppBase() + 0x225DB54))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_8(Il2CppString* jarg1, int32_t jarg2, uint64_t jarg3) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint64_t))(Il2CppBase() + 0x225DD7C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_ExecuteActionOnEvent__SWIG_9(Il2CppString* jarg1, int32_t jarg2) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x225DF44))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_PostMIDIOnEvent(uint32_t jarg1, uint64_t jarg2, uintptr_t jarg3, uint16_t jarg4) {
		return ((T (*)(void *, uint32_t, uint64_t, uintptr_t, uint16_t))(Il2CppBase() + 0x225E180))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_StopMIDIOnEvent__SWIG_0(uint32_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint32_t, uint64_t))(Il2CppBase() + 0x225E378))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_StopMIDIOnEvent__SWIG_1(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x225E508))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_StopMIDIOnEvent__SWIG_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x225E680))(0);
	}
	template <typename T = int32_t> static T CSharp_PinEventInStreamCache__SWIG_0(uint32_t jarg1, signed char jarg2, signed char jarg3) {
		return ((T (*)(void *, uint32_t, signed char, signed char))(Il2CppBase() + 0x225E808))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PinEventInStreamCache__SWIG_1(Il2CppString* jarg1, signed char jarg2, signed char jarg3) {
		return ((T (*)(void *, Il2CppString*, signed char, signed char))(Il2CppBase() + 0x225E9B0))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_UnpinEventInStreamCache__SWIG_0(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x225EB68))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_UnpinEventInStreamCache__SWIG_1(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x225ECE8))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetBufferStatusForPinnedEvent__SWIG_0(uint32_t jarg1, uintptr_t* jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x225EEA8))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetBufferStatusForPinnedEvent__SWIG_1(Il2CppString* jarg1, uintptr_t* jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x225F06C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_0(uint32_t jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4, uint32_t jarg5) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t, bool, uint32_t))(Il2CppBase() + 0x225F2B4))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_1(uint32_t jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t, bool))(Il2CppBase() + 0x225F4C4))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_2(uint32_t jarg1, uint64_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t))(Il2CppBase() + 0x225F6C8))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_3(Il2CppString* jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4, uint32_t jarg5) {
		return ((T (*)(void *, Il2CppString*, uint64_t, int32_t, bool, uint32_t))(Il2CppBase() + 0x225F8D0))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_4(Il2CppString* jarg1, uint64_t jarg2, int32_t jarg3, bool jarg4) {
		return ((T (*)(void *, Il2CppString*, uint64_t, int32_t, bool))(Il2CppBase() + 0x225FAFC))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_5(Il2CppString* jarg1, uint64_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uint64_t, int32_t))(Il2CppBase() + 0x225FD28))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_6(uint32_t jarg1, uint64_t jarg2, float jarg3, bool jarg4, uint32_t jarg5) {
		return ((T (*)(void *, uint32_t, uint64_t, float, bool, uint32_t))(Il2CppBase() + 0x225FF64))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_7(uint32_t jarg1, uint64_t jarg2, float jarg3, bool jarg4) {
		return ((T (*)(void *, uint32_t, uint64_t, float, bool))(Il2CppBase() + 0x2260184))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_8(uint32_t jarg1, uint64_t jarg2, float jarg3) {
		return ((T (*)(void *, uint32_t, uint64_t, float))(Il2CppBase() + 0x2260394))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_9(Il2CppString* jarg1, uint64_t jarg2, float jarg3, bool jarg4, uint32_t jarg5) {
		return ((T (*)(void *, Il2CppString*, uint64_t, float, bool, uint32_t))(Il2CppBase() + 0x22605A8))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_10(Il2CppString* jarg1, uint64_t jarg2, float jarg3, bool jarg4) {
		return ((T (*)(void *, Il2CppString*, uint64_t, float, bool))(Il2CppBase() + 0x22607F8))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SeekOnEvent__SWIG_11(Il2CppString* jarg1, uint64_t jarg2, float jarg3) {
		return ((T (*)(void *, Il2CppString*, uint64_t, float))(Il2CppBase() + 0x2260A38))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_CancelEventCallbackCookie(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C12C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_CancelEventCallbackGameObject(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2260CFC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_CancelEventCallback(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x228C20C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetSourcePlayPosition__SWIG_0(uint32_t jarg1, uintptr_t* jarg2, bool jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t*, bool))(Il2CppBase() + 0x2260F44))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetSourcePlayPosition__SWIG_1(uint32_t jarg1, uintptr_t* jarg2) {
		return ((T (*)(void *, uint32_t, uintptr_t*))(Il2CppBase() + 0x22610EC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetSourceStreamBuffering(uint32_t jarg1, uintptr_t* jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x226129C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_StopAll__SWIG_0(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x226149C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_StopAll__SWIG_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x226161C))(0);
	}
	template <typename T = void> static T CSharp_StopPlayingID__SWIG_0(uint32_t jarg1, int32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x22617A4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_StopPlayingID__SWIG_1(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x226193C))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_StopPlayingID__SWIG_2(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2261AC4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_SetRandomSeed(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2261C44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_MuteBackgroundMusic(bool jarg1) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2261DC4))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_GetBackgroundMusicMute() {
		return ((T (*)(void *))(Il2CppBase() + 0x2261F3C))(0);
	}
	template <typename T = int32_t> static T CSharp_SendPluginCustomGameData(uint32_t jarg1, uint64_t jarg2, int32_t jarg3, uint32_t jarg4, uint32_t jarg5, uintptr_t jarg6, uint32_t jarg7) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t, uint32_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2262130))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = int32_t> static T CSharp_UnregisterAllGameObj() {
		return ((T (*)(void *))(Il2CppBase() + 0x22622DC))(0);
	}
	template <typename T = int32_t> static T CSharp_SetMultiplePositions__SWIG_0(uint64_t jarg1, uintptr_t jarg2, uint16_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint16_t, int32_t))(Il2CppBase() + 0x22624CC))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetMultiplePositions__SWIG_1(uint64_t jarg1, uintptr_t jarg2, uint16_t jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint16_t))(Il2CppBase() + 0x22626DC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetMultiplePositions__SWIG_2(uint64_t jarg1, uintptr_t jarg2, uint16_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint16_t, int32_t))(Il2CppBase() + 0x22628EC))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetMultiplePositions__SWIG_3(uint64_t jarg1, uintptr_t jarg2, uint16_t jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint16_t))(Il2CppBase() + 0x2262AFC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetScalingFactor(uint64_t jarg1, float jarg2) {
		return ((T (*)(void *, uint64_t, float))(Il2CppBase() + 0x2262CF4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_ClearBanks() {
		return ((T (*)(void *))(Il2CppBase() + 0x2262E7C))(0);
	}
	template <typename T = int32_t> static T CSharp_SetBankLoadIOSettings(float jarg1, signed char jarg2) {
		return ((T (*)(void *, float, signed char))(Il2CppBase() + 0x2262FF4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_0(Il2CppString* jarg1, int32_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t*))(Il2CppBase() + 0x2263194))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_1(uint32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x2263368))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_2(uintptr_t jarg1, uint32_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2263508))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_3(uintptr_t jarg1, uint32_t jarg2, int32_t jarg3, uintptr_t* jarg4) {
		return ((T (*)(void *, uintptr_t, uint32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x22636C8))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_4(Il2CppString* jarg1, uintptr_t jarg2, uintptr_t jarg3, int32_t jarg4, uintptr_t* jarg5) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2263914))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_5(uint32_t jarg1, uintptr_t jarg2, uintptr_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2263B94))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_6(uintptr_t jarg1, uint32_t jarg2, uintptr_t jarg3, uintptr_t jarg4, uintptr_t* jarg5) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2263DD0))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_LoadBank__SWIG_7(uintptr_t jarg1, uint32_t jarg2, uintptr_t jarg3, uintptr_t jarg4, int32_t jarg5, uintptr_t* jarg6) {
		return ((T (*)(void *, uintptr_t, uint32_t, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2264030))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_UnloadBank__SWIG_0(Il2CppString* jarg1, uintptr_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x22641FC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_UnloadBank__SWIG_1(Il2CppString* jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x22643D0))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_UnloadBank__SWIG_2(uint32_t jarg1, uintptr_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2264598))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_UnloadBank__SWIG_3(uint32_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x2264740))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_UnloadBank__SWIG_4(Il2CppString* jarg1, uintptr_t jarg2, uintptr_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2264968))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_UnloadBank__SWIG_5(uint32_t jarg1, uintptr_t jarg2, uintptr_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2264BC8))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = void> static T CSharp_CancelBankCallbackCookie(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C2EC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_0(int32_t jarg1, Il2CppString* jarg2, int32_t jarg3) {
		return ((T (*)(void *, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2264E1C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_1(int32_t jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x2264FE0))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_2(int32_t jarg1, uint32_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, int32_t, uint32_t, int32_t))(Il2CppBase() + 0x22651AC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_3(int32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, int32_t, uint32_t))(Il2CppBase() + 0x2265344))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_4(int32_t jarg1, Il2CppString* jarg2, uintptr_t jarg3, uintptr_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, int32_t, Il2CppString*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2265574))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_5(int32_t jarg1, Il2CppString* jarg2, uintptr_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22657E0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_6(int32_t jarg1, uint32_t jarg2, uintptr_t jarg3, uintptr_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, int32_t, uint32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2265A4C))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PrepareBank__SWIG_7(int32_t jarg1, uint32_t jarg2, uintptr_t jarg3, uintptr_t jarg4) {
		return ((T (*)(void *, int32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2265C88))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_ClearPreparedEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x2265E14))(0);
	}
	template <typename T = int32_t> static T CSharp_PrepareEvent__SWIG_0(int32_t jarg1, uintptr_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, int32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2266268))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PrepareEvent__SWIG_1(int32_t jarg1, Il2CppArray<uintptr_t>* jarg2, uint32_t jarg3) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x2266410))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PrepareEvent__SWIG_2(int32_t jarg1, uintptr_t jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5) {
		return ((T (*)(void *, int32_t, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x226691C))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PrepareEvent__SWIG_3(int32_t jarg1, Il2CppArray<uintptr_t>* jarg2, uint32_t jarg3, uintptr_t jarg4, uintptr_t jarg5) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2266B60))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SetMedia(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2266E1C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_UnsetMedia(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2267028))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_PrepareGameSyncs__SWIG_0(int32_t jarg1, int32_t jarg2, Il2CppString* jarg3, uintptr_t jarg4, uint32_t jarg5) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t, uint32_t))(Il2CppBase() + 0x226749C))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PrepareGameSyncs__SWIG_1(int32_t jarg1, int32_t jarg2, uint32_t jarg3, Il2CppArray<uintptr_t>* jarg4, uint32_t jarg5) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x226768C))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PrepareGameSyncs__SWIG_2(int32_t jarg1, int32_t jarg2, Il2CppString* jarg3, uintptr_t jarg4, uint32_t jarg5, uintptr_t jarg6, uintptr_t jarg7) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2267BB0))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = int32_t> static T CSharp_PrepareGameSyncs__SWIG_3(int32_t jarg1, int32_t jarg2, uint32_t jarg3, Il2CppArray<uintptr_t>* jarg4, uint32_t jarg5, uintptr_t jarg6, uintptr_t jarg7) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2267E3C))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
	}
	template <typename T = int32_t> static T CSharp_AddListener(uint64_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint64_t, uint64_t))(Il2CppBase() + 0x226805C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_RemoveListener(uint64_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint64_t, uint64_t))(Il2CppBase() + 0x2268258))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AddDefaultListener(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x226843C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_RemoveDefaultListener(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2268618))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_ResetListenersToDefault(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x22687F4))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetListenerSpatialization__SWIG_0(uint64_t jarg1, bool jarg2, uintptr_t jarg3, Il2CppArray<uintptr_t>* jarg4) {
		return ((T (*)(void *, uint64_t, bool, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x22689F8))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetListenerSpatialization__SWIG_1(uint64_t jarg1, bool jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x2268C10))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_0(uint32_t jarg1, float jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5, bool jarg6) {
		return ((T (*)(void *, uint32_t, float, uint64_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2268E14))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_1(uint32_t jarg1, float jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, uint32_t, float, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x2269024))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_2(uint32_t jarg1, float jarg2, uint64_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint32_t, float, uint64_t, int32_t))(Il2CppBase() + 0x2269228))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_3(uint32_t jarg1, float jarg2, uint64_t jarg3) {
		return ((T (*)(void *, uint32_t, float, uint64_t))(Il2CppBase() + 0x2269420))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_4(uint32_t jarg1, float jarg2) {
		return ((T (*)(void *, uint32_t, float))(Il2CppBase() + 0x22695B8))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_5(Il2CppString* jarg1, float jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5, bool jarg6) {
		return ((T (*)(void *, Il2CppString*, float, uint64_t, int32_t, int32_t, bool))(Il2CppBase() + 0x22697B4))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_6(Il2CppString* jarg1, float jarg2, uint64_t jarg3, int32_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, Il2CppString*, float, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x22699F0))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_7(Il2CppString* jarg1, float jarg2, uint64_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, Il2CppString*, float, uint64_t, int32_t))(Il2CppBase() + 0x2269C20))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_8(Il2CppString* jarg1, float jarg2, uint64_t jarg3) {
		return ((T (*)(void *, Il2CppString*, float, uint64_t))(Il2CppBase() + 0x2269E48))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValue__SWIG_9(Il2CppString* jarg1, float jarg2) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x226A010))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_0(uint32_t jarg1, float jarg2, uint32_t jarg3, int32_t jarg4, int32_t jarg5, bool jarg6) {
		return ((T (*)(void *, uint32_t, float, uint32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x226A1EC))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_1(uint32_t jarg1, float jarg2, uint32_t jarg3, int32_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, uint32_t, float, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x226A3B4))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_2(uint32_t jarg1, float jarg2, uint32_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint32_t, float, uint32_t, int32_t))(Il2CppBase() + 0x226A570))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_3(uint32_t jarg1, float jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint32_t, float, uint32_t))(Il2CppBase() + 0x226A71C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_4(Il2CppString* jarg1, float jarg2, uint32_t jarg3, int32_t jarg4, int32_t jarg5, bool jarg6) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x226A8D8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_5(Il2CppString* jarg1, float jarg2, uint32_t jarg3, int32_t jarg4, int32_t jarg5) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x226AAC8))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_6(Il2CppString* jarg1, float jarg2, uint32_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t, int32_t))(Il2CppBase() + 0x226ACB0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetRTPCValueByPlayingID__SWIG_7(Il2CppString* jarg1, float jarg2, uint32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, float, uint32_t))(Il2CppBase() + 0x226AE88))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_0(uint32_t jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4, bool jarg5) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t, int32_t, bool))(Il2CppBase() + 0x226B0B0))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_1(uint32_t jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x226B2C0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_2(uint32_t jarg1, uint64_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, uint32_t, uint64_t, int32_t))(Il2CppBase() + 0x226B4C4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_3(uint32_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint32_t, uint64_t))(Il2CppBase() + 0x226B6B8))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_4(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x226B848))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_5(Il2CppString* jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4, bool jarg5) {
		return ((T (*)(void *, Il2CppString*, uint64_t, int32_t, int32_t, bool))(Il2CppBase() + 0x226BA38))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_6(Il2CppString* jarg1, uint64_t jarg2, int32_t jarg3, int32_t jarg4) {
		return ((T (*)(void *, Il2CppString*, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x226BC64))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_7(Il2CppString* jarg1, uint64_t jarg2, int32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uint64_t, int32_t))(Il2CppBase() + 0x226BE90))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_8(Il2CppString* jarg1, uint64_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x226C0AC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_ResetRTPCValue__SWIG_9(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226C264))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetSwitch__SWIG_0(uint32_t jarg1, uint32_t jarg2, uint64_t jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uint64_t))(Il2CppBase() + 0x226C46C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetSwitch__SWIG_1(Il2CppString* jarg1, Il2CppString* jarg2, uint64_t jarg3) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uint64_t))(Il2CppBase() + 0x226C65C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PostTrigger__SWIG_0(uint32_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint32_t, uint64_t))(Il2CppBase() + 0x226C890))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_PostTrigger__SWIG_1(Il2CppString* jarg1, uint64_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x226CA7C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetState__SWIG_0(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226CC3C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetState__SWIG_1(Il2CppString* jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x226CDCC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetGameObjectAuxSendValues(uint64_t jarg1, uintptr_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x226D018))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetGameObjectOutputBusVolume(uint64_t jarg1, uint64_t jarg2, float jarg3) {
		return ((T (*)(void *, uint64_t, uint64_t, float))(Il2CppBase() + 0x226D228))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetActorMixerEffect(uint32_t jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x226D3D8))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetBusEffect__SWIG_0(uint32_t jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x226D580))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetBusEffect__SWIG_1(Il2CppString* jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uint32_t, uint32_t))(Il2CppBase() + 0x226D728))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetMixer__SWIG_0(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226D8E8))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetMixer__SWIG_1(Il2CppString* jarg1, uint32_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x226DA78))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetBusConfig__SWIG_0(uint32_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x226DC44))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetBusConfig__SWIG_1(Il2CppString* jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x226DDE8))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetObjectObstructionAndOcclusion(uint64_t jarg1, uint64_t jarg2, float jarg3, float jarg4) {
		return ((T (*)(void *, uint64_t, uint64_t, float, float))(Il2CppBase() + 0x226E020))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetMultipleObstructionAndOcclusion(uint64_t jarg1, uint64_t jarg2, uintptr_t jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uint64_t, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x226E24C))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_StartOutputCapture(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226E3E8))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_StopOutputCapture() {
		return ((T (*)(void *))(Il2CppBase() + 0x226E588))(0);
	}
	template <typename T = int32_t> static T CSharp_AddOutputCaptureMarker(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226E6F8))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_StartProfilerCapture(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x226E8A0))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_StopProfilerCapture() {
		return ((T (*)(void *))(Il2CppBase() + 0x226EA40))(0);
	}
	template <typename T = int32_t> static T CSharp_RemoveOutput(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x226EBC0))(0, jarg1);
	}
	template <typename T = uint64_t> static T CSharp_GetOutputID__SWIG_0(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226ED50))(0, jarg1, jarg2);
	}
	template <typename T = uint64_t> static T CSharp_GetOutputID__SWIG_1(Il2CppString* jarg1, uint32_t jarg2) {
		return ((T (*)(void *, Il2CppString*, uint32_t))(Il2CppBase() + 0x226EEE0))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetBusDevice__SWIG_0(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x226F0A0))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetBusDevice__SWIG_1(Il2CppString* jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x226F230))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetOutputVolume(uint64_t jarg1, float jarg2) {
		return ((T (*)(void *, uint64_t, float))(Il2CppBase() + 0x226F418))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_Suspend__SWIG_0(bool jarg1) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x226F5A8))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_Suspend__SWIG_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x226F720))(0);
	}
	template <typename T = int32_t> static T CSharp_WakeupFromSuspend() {
		return ((T (*)(void *))(Il2CppBase() + 0x226F888))(0);
	}
	template <typename T = uint32_t> static T CSharp_GetBufferTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x226F9F0))(0);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_iCurrentPosition_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2253204))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkSegmentInfo_iCurrentPosition_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2253390))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_iPreEntryDuration_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x225351C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkSegmentInfo_iPreEntryDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22536A8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_iActiveDuration_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2253834))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkSegmentInfo_iActiveDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22539C0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_iPostExitDuration_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2253B4C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkSegmentInfo_iPostExitDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2253CD8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_iRemainingLookAheadTime_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2253E64))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkSegmentInfo_iRemainingLookAheadTime_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2253FF0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_fBeatDuration_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x225417C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkSegmentInfo_fBeatDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2254308))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_fBarDuration_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2254494))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkSegmentInfo_fBarDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2254620))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_fGridDuration_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22547AC))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkSegmentInfo_fGridDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2254938))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSegmentInfo_fGridOffset_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2254AC4))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkSegmentInfo_fGridOffset_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2254C50))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSegmentInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2252D00))(0);
	}
	template <typename T = void> static T CSharp_delete_AkSegmentInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2253078))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AK_INVALID_MIDI_CHANNEL_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x226FB58))(0);
	}
	template <typename T = unsigned char> static T CSharp_AK_INVALID_MIDI_NOTE_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x226FCC0))(0);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byChan_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228C3CC))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byChan_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C4B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tGen_byParam1_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228C594))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tGen_byParam1_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C67C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tGen_byParam2_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228C75C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tGen_byParam2_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C844))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tGen() {
		return ((T (*)(void *))(Il2CppBase() + 0x228C924))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tGen(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228C9F4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tNoteOnOff_byNote_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228CAD4))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tNoteOnOff_byNote_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228CBBC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228CC9C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228CD84))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tNoteOnOff() {
		return ((T (*)(void *))(Il2CppBase() + 0x228CE64))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tNoteOnOff(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228CF34))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tCc_byCc_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228D014))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tCc_byCc_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228D0FC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tCc_byValue_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228D1DC))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tCc_byValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228D2C4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tCc() {
		return ((T (*)(void *))(Il2CppBase() + 0x228D3A4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tCc(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228D474))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228D554))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228D63C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228D71C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228D804))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tPitchBend() {
		return ((T (*)(void *))(Il2CppBase() + 0x228D8E4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tPitchBend(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228D9B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228DA94))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228DB7C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228DC5C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228DD44))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tNoteAftertouch() {
		return ((T (*)(void *))(Il2CppBase() + 0x228DE24))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tNoteAftertouch(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228DEF4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tChanAftertouch_byValue_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228DFD4))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tChanAftertouch_byValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228E0BC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tChanAftertouch() {
		return ((T (*)(void *))(Il2CppBase() + 0x228E19C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tChanAftertouch(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228E26C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228E34C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228E434))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent_tProgramChange() {
		return ((T (*)(void *))(Il2CppBase() + 0x228E514))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent_tProgramChange(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228E5E4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_Gen_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228E6C4))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_Gen_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228E7AC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_Cc_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228E88C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_Cc_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228E974))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_NoteOnOff_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228EA54))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_NoteOnOff_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228EB3C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_PitchBend_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228EC1C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_PitchBend_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228ED04))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_NoteAftertouch_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228EDE4))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_NoteAftertouch_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228EECC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_ChanAftertouch_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228EFAC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_ChanAftertouch_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228F094))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_ProgramChange_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x228F174))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEvent_ProgramChange_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228F25C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byType_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x228F33C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkMIDIEvent_byType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228F424))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byOnOffNote_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228F504))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byOnOffNote_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228F5EC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byVelocity_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228F6CC))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byVelocity_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228F7B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byCc_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x228F894))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkMIDIEvent_byCc_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228F97C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byCcValue_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228FA5C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byCcValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228FB44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byValueLsb_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228FC24))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byValueLsb_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228FD0C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byValueMsb_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228FDEC))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byValueMsb_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x228FED4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byAftertouchNote_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x228FFB4))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byAftertouchNote_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229009C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byNoteAftertouchValue_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x229017C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byNoteAftertouchValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2290264))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byChanAftertouchValue_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x2290344))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byChanAftertouchValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229042C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIEvent_byProgramNum_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x229050C))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEvent_byProgramNum_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22905F4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x22906D4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEvent(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22907A4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMIDIPost_uOffset_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2290884))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkMIDIPost_uOffset_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229096C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMIDIPost_PostOnEvent(uintptr_t jarg1, uint32_t jarg2, uint64_t jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x2290A4C))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = void> static T CSharp_AkMIDIPost_Clone(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2290B44))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkMIDIPost_GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x2290C2C))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIPost() {
		return ((T (*)(void *))(Il2CppBase() + 0x2290CFC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIPost(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2290DCC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMemSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x2290EAC))(0);
	}
	template <typename T = void> static T CSharp_AkMemSettings_uMaxNumPools_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2290F7C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkMemSettings_uMaxNumPools_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291064))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMemSettings_uDebugFlags_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2291144))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkMemSettings_uDebugFlags_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229122C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkMemSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229130C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkMusicSettings_fStreamingLookAheadRatio_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22913EC))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkMusicSettings_fStreamingLookAheadRatio_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22914D4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMusicSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x22915B4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMusicSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291684))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetPlayingSegmentInfo__SWIG_0(uint32_t jarg1, uintptr_t jarg2, bool jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x226FEC4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetPlayingSegmentInfo__SWIG_1(uint32_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x22700D8))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSerializedCallbackHeader_pPackage_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x225530C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkSerializedCallbackHeader_pNext_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2255510))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkSerializedCallbackHeader_eType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2255694))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkSerializedCallbackHeader_GetData(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2255818))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSerializedCallbackHeader() {
		return ((T (*)(void *))(Il2CppBase() + 0x2254E10))(0);
	}
	template <typename T = void> static T CSharp_delete_AkSerializedCallbackHeader(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2255188))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkCallbackInfo_pCookie_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291764))(0, jarg1);
	}
	template <typename T = uint64_t> static T CSharp_AkCallbackInfo_gameObjID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291844))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2291924))(0);
	}
	template <typename T = void> static T CSharp_delete_AkCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22919F4))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkEventCallbackInfo_playingID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291AD4))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkEventCallbackInfo_eventID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291BB4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkEventCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2291C94))(0);
	}
	template <typename T = void> static T CSharp_delete_AkEventCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291D64))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byChan_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291E44))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byParam1_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2291F24))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byParam2_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292004))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMIDIEventCallbackInfo_byType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22920E4))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22921C4))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byVelocity_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22922A4))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMIDIEventCallbackInfo_byCc_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292384))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byCcValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292464))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byValueLsb_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292544))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byValueMsb_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292624))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292704))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22927E4))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22928C4))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_AkMIDIEventCallbackInfo_byProgramNum_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22929A4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMIDIEventCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2292A84))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMIDIEventCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292B54))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMarkerCallbackInfo_uIdentifier_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292C34))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMarkerCallbackInfo_uPosition_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292D14))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMarkerCallbackInfo_strLabel_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292DF4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMarkerCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2292ED4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMarkerCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2292FA4))(0, jarg1);
	}
	template <typename T = float> static T CSharp_AkDurationCallbackInfo_fDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293084))(0, jarg1);
	}
	template <typename T = float> static T CSharp_AkDurationCallbackInfo_fEstimatedDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293164))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkDurationCallbackInfo_audioNodeID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293244))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkDurationCallbackInfo_mediaID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293324))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkDurationCallbackInfo_bStreaming_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293404))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkDurationCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x22934EC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkDurationCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22935BC))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229369C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229377C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229385C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkDynamicSequenceItemCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x229393C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkDynamicSequenceItemCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293A0C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMusicSyncCallbackInfo_playingID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293AEC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293BCC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293CAC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293D8C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293E6C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2293F4C))(0, jarg1);
	}
	template <typename T = float> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229402C))(0, jarg1);
	}
	template <typename T = float> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229410C))(0, jarg1);
	}
	template <typename T = float> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22941EC))(0, jarg1);
	}
	template <typename T = float> static T CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22942CC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMusicSyncCallbackInfo_musicSyncType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22943AC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMusicSyncCallbackInfo_userCueName_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229448C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMusicSyncCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x229456C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMusicSyncCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229463C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMusicPlaylistCallbackInfo_playlistID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229471C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22947FC))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22948DC))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22949BC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMusicPlaylistCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2294A9C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMusicPlaylistCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2294B6C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkBankCallbackInfo_bankID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2294C4C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkBankCallbackInfo_inMemoryBankPtr_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2294D2C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkBankCallbackInfo_loadResult_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2294E0C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkBankCallbackInfo_memPoolId_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2294EEC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkBankCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2294FCC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkBankCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229509C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMonitoringCallbackInfo_errorCode_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229517C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkMonitoringCallbackInfo_errorLevel_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229525C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkMonitoringCallbackInfo_playingID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229533C))(0, jarg1);
	}
	template <typename T = uint64_t> static T CSharp_AkMonitoringCallbackInfo_gameObjID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229541C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMonitoringCallbackInfo_message_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22954FC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkMonitoringCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x22955DC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkMonitoringCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22956AC))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229578C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkAudioInterruptionCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2295874))(0);
	}
	template <typename T = void> static T CSharp_delete_AkAudioInterruptionCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2295944))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2295A24))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkAudioSourceChangeCallbackInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2295B0C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkAudioSourceChangeCallbackInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2295BDC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkCallbackSerializer_Init(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2295CBC))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkCallbackSerializer_Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x2295DA4))(0);
	}
	template <typename T = uintptr_t> static T CSharp_AkCallbackSerializer_Lock() {
		return ((T (*)(void *))(Il2CppBase() + 0x2295E74))(0);
	}
	template <typename T = void> static T CSharp_AkCallbackSerializer_SetLocalOutput(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2295F44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkCallbackSerializer_Unlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x2296024))(0);
	}
	template <typename T = int32_t> static T CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc(bool jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x22960F4))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkCallbackSerializer() {
		return ((T (*)(void *))(Il2CppBase() + 0x22961DC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkCallbackSerializer(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22962AC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_PostCode__SWIG_0(int32_t jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4, uint32_t jarg5, bool jarg6) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t, uint64_t, uint32_t, bool))(Il2CppBase() + 0x22702D8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_PostCode__SWIG_1(int32_t jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4, uint32_t jarg5) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x22704F4))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PostCode__SWIG_2(int32_t jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t, uint64_t))(Il2CppBase() + 0x2270704))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_PostCode__SWIG_3(int32_t jarg1, int32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x22708BC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PostCode__SWIG_4(int32_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2270A54))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_PostString__SWIG_0(Il2CppString* jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4, uint32_t jarg5, bool jarg6) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint32_t, uint64_t, uint32_t, bool))(Il2CppBase() + 0x2270C54))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_PostString__SWIG_1(Il2CppString* jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4, uint32_t jarg5) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x2270E98))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_PostString__SWIG_2(Il2CppString* jarg1, int32_t jarg2, uint32_t jarg3, uint64_t jarg4) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint32_t, uint64_t))(Il2CppBase() + 0x22710D0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_PostString__SWIG_3(Il2CppString* jarg1, int32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, int32_t, uint32_t))(Il2CppBase() + 0x22712B0))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_PostString__SWIG_4(Il2CppString* jarg1, int32_t jarg2) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x2271470))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetTimeStamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x2271618))(0);
	}
	template <typename T = uint32_t> static T CSharp_GetNumNonZeroBits(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2271788))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_ResolveDialogueEvent__SWIG_0(uint32_t jarg1, Il2CppArray<uintptr_t>* jarg2, uint32_t jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x2271928))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = uint32_t> static T CSharp_ResolveDialogueEvent__SWIG_1(uint32_t jarg1, Il2CppArray<uintptr_t>* jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x2271ADC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetDialogueEventCustomPropertyValue__SWIG_0(uint32_t jarg1, uint32_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2271C8C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetDialogueEventCustomPropertyValue__SWIG_1(uint32_t jarg1, uint32_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2271E44))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fCenterPct_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229638C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fCenterPct_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2296474))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_pannerType_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2296554))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPositioningInfo_pannerType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229663C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_posSourceType_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x229671C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPositioningInfo_posSourceType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2296804))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_bUpdateEachFrame_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x22968E4))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPositioningInfo_bUpdateEachFrame_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22969CC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_e3DSpatializationMode_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2296AB4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkPositioningInfo_e3DSpatializationMode_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2296B9C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_bUseAttenuation_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2296C7C))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPositioningInfo_bUseAttenuation_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2296D64))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_bUseConeAttenuation_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2296E4C))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPositioningInfo_bUseConeAttenuation_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2296F34))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fInnerAngle_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229701C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fInnerAngle_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2297104))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fOuterAngle_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22971E4))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fOuterAngle_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22972CC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fConeMaxAttenuation_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22973AC))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fConeMaxAttenuation_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2297494))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_LPFCone_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2297574))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_LPFCone_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229765C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_HPFCone_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229773C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_HPFCone_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2297824))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fMaxDistance_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2297904))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fMaxDistance_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22979EC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fVolDryAtMaxDist_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2297ACC))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fVolDryAtMaxDist_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2297BB4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2297C94))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2297D7C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2297E5C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2297F44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_LPFValueAtMaxDist_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2298024))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_LPFValueAtMaxDist_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229810C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPositioningInfo_HPFValueAtMaxDist_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22981EC))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPositioningInfo_HPFValueAtMaxDist_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22982D4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPositioningInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x22983B4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkPositioningInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2298484))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkObjectInfo_objID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2298564))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkObjectInfo_objID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229864C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkObjectInfo_parentID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229872C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkObjectInfo_parentID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2298814))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkObjectInfo_iDepth_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x22988F4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkObjectInfo_iDepth_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22989DC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkObjectInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2298ABC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkObjectInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2298B8C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetPosition(uint64_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x2272150))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetListenerPosition(uint64_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x22723B4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetRTPCValue__SWIG_0(uint32_t jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t* jarg4, uintptr_t jarg5) {
		return ((T (*)(void *, uint32_t, uint64_t, uint32_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x22725B0))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_GetRTPCValue__SWIG_1(Il2CppString* jarg1, uint64_t jarg2, uint32_t jarg3, uintptr_t* jarg4, uintptr_t jarg5) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uint32_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x22727D8))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_GetSwitch__SWIG_0(uint32_t jarg1, uint64_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uint64_t, uintptr_t*))(Il2CppBase() + 0x2272A1C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetSwitch__SWIG_1(Il2CppString* jarg1, uint64_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, Il2CppString*, uint64_t, uintptr_t*))(Il2CppBase() + 0x2272C2C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetState__SWIG_0(uint32_t jarg1, uintptr_t* jarg2) {
		return ((T (*)(void *, uint32_t, uintptr_t*))(Il2CppBase() + 0x2272E0C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetState__SWIG_1(Il2CppString* jarg1, uintptr_t* jarg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2272FAC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_GetGameObjectAuxSendValues(uint64_t jarg1, uintptr_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22731F4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetGameObjectDryLevelValue(uint64_t jarg1, uint64_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint64_t, uint64_t, uintptr_t*))(Il2CppBase() + 0x22733F8))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetObjectObstructionAndOcclusion(uint64_t jarg1, uint64_t jarg2, uintptr_t* jarg3, uintptr_t* jarg4) {
		return ((T (*)(void *, uint64_t, uint64_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2273618))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_QueryAudioObjectIDs__SWIG_0(uint32_t jarg1, uintptr_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2273800))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_QueryAudioObjectIDs__SWIG_1(Il2CppString* jarg1, uintptr_t jarg2, uintptr_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22739BC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetPositioningInfo(uint32_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x2273B90))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_GetIsGameObjectActive(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2273D6C))(0, jarg1);
	}
	template <typename T = float> static T CSharp_GetMaxRadius(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2273F50))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_GetEventIDFromPlayingID(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22740D8))(0, jarg1);
	}
	template <typename T = uint64_t> static T CSharp_GetGameObjectFromPlayingID(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2274258))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetPlayingIDsFromGameObject(uint64_t jarg1, uintptr_t jarg2, Il2CppArray<uintptr_t>** jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2274438))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetCustomPropertyValue__SWIG_0(uint32_t jarg1, uint32_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x227468C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_GetCustomPropertyValue__SWIG_1(uint32_t jarg1, uint32_t jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t*))(Il2CppBase() + 0x2274844))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22749E4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2274B64))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2274CE4))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_ChannelMaskToNumChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2274E64))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_ChannelMaskFromNumChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2274FE4))(0, jarg1);
	}
	template <typename T = unsigned char> static T CSharp_ChannelBitToIndex(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x227516C))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_HasSurroundChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x22752F4))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_HasStrictlyOnePairOfSurroundChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x227547C))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_HasSideAndRearChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2275604))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_HasHeightChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x227578C))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_BackToSideChannels(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2275914))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_StdChannelIndexToDisplayIndex(int32_t jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, int32_t, uint32_t, uint32_t))(Il2CppBase() + 0x2275AAC))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_uNumChannels_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2298C6C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkChannelConfig_uNumChannels_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2298D54))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_eConfigType_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2298E34))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkChannelConfig_eConfigType_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2298F1C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_uChannelMask_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2298FFC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkChannelConfig_uChannelMask_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22990E4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkChannelConfig__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x22991C4))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkChannelConfig__SWIG_1(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x2299294))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_Clear(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229937C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_SetStandard(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229945C))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_SetStandardOrAnonymous(uintptr_t jarg1, uint32_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x2299544))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_SetAnonymous(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x2299634))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_SetAmbisonic(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229971C))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkChannelConfig_IsValid(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2299804))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_AkChannelConfig_Serialize(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22998EC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkChannelConfig_Deserialize(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22999CC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkChannelConfig_RemoveLFE(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2299AB4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkChannelConfig_RemoveCenter(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2299B94))(0, jarg1);
	}
	template <typename T = bool> static T CSharp_AkChannelConfig_IsChannelConfigSupported(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2299C74))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkChannelConfig(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2299D5C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkImageSourceParams__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x2299E3C))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkImageSourceParams__SWIG_1(uintptr_t jarg1, float jarg2, float jarg3) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x2299F0C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_AkImageSourceParams_sourcePosition_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2299FFC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkImageSourceParams_sourcePosition_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229A0E4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkImageSourceParams_fDistanceScalingFactor_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229A1C4))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkImageSourceParams_fDistanceScalingFactor_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229A2AC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkImageSourceParams_fLevel_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229A38C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkImageSourceParams_fLevel_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229A474))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkImageSourceParams(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229A554))(0, jarg1);
	}
	template <typename T = float> static T CSharp_kDefaultMaxPathLength_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2275C34))(0);
	}
	template <typename T = void> static T CSharp_g_SpatialAudioPoolId_set(int32_t jarg1) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2275DA4))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_g_SpatialAudioPoolId_get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2275F1C))(0);
	}
	template <typename T = int32_t> static T CSharp__ArrayPoolSpatialAudio_Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x229A634))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new__ArrayPoolSpatialAudio() {
		return ((T (*)(void *))(Il2CppBase() + 0x229A704))(0);
	}
	template <typename T = void> static T CSharp_delete__ArrayPoolSpatialAudio(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229A7D4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSpatialAudioInitSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x229A8B4))(0);
	}
	template <typename T = void> static T CSharp_AkSpatialAudioInitSettings_uPoolID_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x229A984))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkSpatialAudioInitSettings_uPoolID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229AA6C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSpatialAudioInitSettings_uPoolSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229AB4C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSpatialAudioInitSettings_uPoolSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229AC34))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229AD14))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229ADFC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229AEDC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229AFC4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229B0A4))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229B18C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229B26C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229B354))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkSpatialAudioInitSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229B434))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkImageSourceSettings__SWIG_0() {
		return ((T (*)(void *))(Il2CppBase() + 0x229B514))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkImageSourceSettings__SWIG_1(uintptr_t jarg1, float jarg2, float jarg3) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x229B5E4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = void> static T CSharp_delete_AkImageSourceSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229B6D4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkImageSourceSettings_SetOneTexture(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229B7B4))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkImageSourceSettings_SetName(uintptr_t jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x229B89C))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkImageSourceSettings_params__set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229B9A8))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkImageSourceSettings_params__get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229BA90))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkEmitterSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x229BB70))(0);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_reflectAuxBusID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229BC40))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkEmitterSettings_reflectAuxBusID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229BD28))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_reflectionMaxPathLength_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229BE08))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkEmitterSettings_reflectionMaxPathLength_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229BEF0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_reflectionsAuxBusGain_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229BFD0))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkEmitterSettings_reflectionsAuxBusGain_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229C0B8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_reflectionsOrder_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229C198))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkEmitterSettings_reflectionsOrder_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229C280))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_reflectorFilterMask_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229C360))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkEmitterSettings_reflectorFilterMask_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229C448))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_roomReverbAuxBusGain_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229C528))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkEmitterSettings_roomReverbAuxBusGain_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229C610))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkEmitterSettings_useImageSources_set(uintptr_t jarg1, unsigned char jarg2) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x229C6F0))(0, jarg1, jarg2);
	}
	template <typename T = unsigned char> static T CSharp_AkEmitterSettings_useImageSources_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229C7D8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkEmitterSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229C8B8))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkTriangle() {
		return ((T (*)(void *))(Il2CppBase() + 0x229C998))(0);
	}
	template <typename T = void> static T CSharp_AkTriangle_point0_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229CA68))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkTriangle_point0_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229CB50))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTriangle_point1_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229CC30))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkTriangle_point1_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229CD18))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTriangle_point2_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229CDF8))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkTriangle_point2_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229CEE0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTriangle_textureID_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229CFC0))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkTriangle_textureID_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229D0A8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTriangle_reflectorChannelMask_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229D188))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkTriangle_reflectorChannelMask_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229D270))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTriangle_strName_set(uintptr_t jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x229D350))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkTriangle_strName_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229D45C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkTriangle(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229D53C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPathInfo_imageSource_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229D61C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPathInfo_imageSource_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229D704))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPathInfo_numReflections_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229D7E4))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSoundPathInfo_numReflections_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229D8CC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPathInfo_occlusionPoint_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229D9AC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPathInfo_occlusionPoint_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229DA94))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPathInfo_isOccluded_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x229DB74))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkSoundPathInfo_isOccluded_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229DC5C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSoundPathInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x229DD44))(0);
	}
	template <typename T = void> static T CSharp_delete_AkSoundPathInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229DE14))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPropagationPathInfo_nodePoint_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229DEF4))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPropagationPathInfo_nodePoint_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229DFDC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPropagationPathInfo_numNodes_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229E0BC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkPropagationPathInfo_numNodes_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229E1A4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPropagationPathInfo_length_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229E284))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPropagationPathInfo_length_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229E36C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPropagationPathInfo_gain_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229E44C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPropagationPathInfo_gain_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229E534))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPropagationPathInfo_dryDiffractionAngle_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229E614))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPropagationPathInfo_dryDiffractionAngle_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229E6FC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPropagationPathInfo_wetDiffractionAngle_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229E7D4))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPropagationPathInfo_wetDiffractionAngle_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229E8BC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPropagationPathInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x229E99C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkPropagationPathInfo(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229EA6C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkRoomParams() {
		return ((T (*)(void *))(Il2CppBase() + 0x229EB4C))(0);
	}
	template <typename T = void> static T CSharp_AkRoomParams_Up_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229EC1C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkRoomParams_Up_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229ED04))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_Front_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229EDE4))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkRoomParams_Front_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229EECC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_ReverbAuxBus_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x229EFAC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkRoomParams_ReverbAuxBus_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229F094))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_ReverbLevel_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229F174))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkRoomParams_ReverbLevel_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229F25C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_WallOcclusion_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229F33C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkRoomParams_WallOcclusion_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229F424))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_Priority_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x229F504))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkRoomParams_Priority_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229F5EC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x229F6CC))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229F7B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x229F894))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229F97C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_delete_AkRoomParams(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229FA64))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetPoolID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2276084))(0);
	}
	template <typename T = int32_t> static T CSharp_RegisterEmitter(uint64_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x2276264))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_UnregisterEmitter(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2276444))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetEmitterAuxSendValues(uint64_t jarg1, uintptr_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2276650))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetImageSource__SWIG_0(uint32_t jarg1, uintptr_t jarg2, uint32_t jarg3, uint64_t jarg4, uint64_t jarg5) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uint64_t, uint64_t))(Il2CppBase() + 0x2276870))(0, jarg1, jarg2, jarg3, jarg4, jarg5);
	}
	template <typename T = int32_t> static T CSharp_SetImageSource__SWIG_1(uint32_t jarg1, uintptr_t jarg2, uint32_t jarg3, uint64_t jarg4) {
		return ((T (*)(void *, uint32_t, uintptr_t, uint32_t, uint64_t))(Il2CppBase() + 0x2276A58))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_RemoveImageSource__SWIG_0(uint32_t jarg1, uint32_t jarg2, uint64_t jarg3) {
		return ((T (*)(void *, uint32_t, uint32_t, uint64_t))(Il2CppBase() + 0x2276C58))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_RemoveImageSource__SWIG_1(uint32_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x2276DF0))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetGeometry(uint64_t jarg1, uintptr_t jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, uint32_t))(Il2CppBase() + 0x2276FB4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_RemoveGeometry(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2277154))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_RemoveRoom(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x22772EC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_RemovePortal(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2277484))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetGameObjectInRoom(uint64_t jarg1, uint64_t jarg2) {
		return ((T (*)(void *, uint64_t, uint64_t))(Il2CppBase() + 0x227766C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetEmitterObstruction(uint64_t jarg1, float jarg2) {
		return ((T (*)(void *, uint64_t, float))(Il2CppBase() + 0x2277864))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetPortalObstruction(uint64_t jarg1, float jarg2) {
		return ((T (*)(void *, uint64_t, float))(Il2CppBase() + 0x2277A14))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_threadLEngine_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229FB44))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlatformInitSettings_threadLEngine_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229FC2C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_threadBankManager_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229FD0C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlatformInitSettings_threadBankManager_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229FDF4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_threadMonitor_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x229FED4))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlatformInitSettings_threadMonitor_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x229FFBC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22A009C))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A0184))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A0264))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A034C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_uSampleRate_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A042C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkPlatformInitSettings_uSampleRate_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A0514))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set(uintptr_t jarg1, uint16_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint16_t))(Il2CppBase() + 0x22A05F4))(0, jarg1, jarg2);
	}
	template <typename T = uint16_t> static T CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A06DC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_uChannelMask_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A07BC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkPlatformInitSettings_uChannelMask_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A08A4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkPlatformInitSettings_bRoundFrameSizeToHWSize_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x22A0984))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkPlatformInitSettings_bRoundFrameSizeToHWSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A0A6C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPlatformInitSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A0B54))(0);
	}
	template <typename T = void> static T CSharp_delete_AkPlatformInitSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A0C24))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_GetFastPathSettings(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2277BD4))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkStreamMgrSettings_uMemorySize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A0D04))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkStreamMgrSettings_uMemorySize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A0DEC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkStreamMgrSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A0ECC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkStreamMgrSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A0F9C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_pIOMemory_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22A107C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkDeviceSettings_pIOMemory_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A1164))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_uIOMemorySize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A1244))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkDeviceSettings_uIOMemorySize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A132C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_uIOMemoryAlignment_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A140C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkDeviceSettings_uIOMemoryAlignment_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A14F4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_ePoolAttributes_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x22A15D4))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkDeviceSettings_ePoolAttributes_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A16BC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_uGranularity_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A179C))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkDeviceSettings_uGranularity_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A1884))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_uSchedulerTypeFlags_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A1964))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkDeviceSettings_uSchedulerTypeFlags_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A1A4C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_threadProperties_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22A1B2C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkDeviceSettings_threadProperties_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A1C14))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set(uintptr_t jarg1, float jarg2) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x22A1CF4))(0, jarg1, jarg2);
	}
	template <typename T = float> static T CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A1DDC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_uMaxConcurrentIO_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A1EBC))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkDeviceSettings_uMaxConcurrentIO_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A1FA4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_bUseStreamCache_set(uintptr_t jarg1, bool jarg2) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x22A2084))(0, jarg1, jarg2);
	}
	template <typename T = bool> static T CSharp_AkDeviceSettings_bUseStreamCache_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A216C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A2254))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A233C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkDeviceSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A241C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkDeviceSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A24EC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkThreadProperties_nPriority_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x22A25CC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkThreadProperties_nPriority_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A26B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkThreadProperties_uStackSize_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A2794))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkThreadProperties_uStackSize_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A287C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkThreadProperties_uSchedPolicy_set(uintptr_t jarg1, int32_t jarg2) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x22A295C))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AkThreadProperties_uSchedPolicy_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A2A44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkThreadProperties_dwAffinityMask_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A2B24))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkThreadProperties_dwAffinityMask_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A2C0C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkThreadProperties() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A2CEC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkThreadProperties(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A2DBC))(0, jarg1);
	}
	template <typename T = void> static T CSharp_SetErrorLogger__SWIG_0(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2277D5C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_SetErrorLogger__SWIG_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x2277EE8))(0);
	}
	template <typename T = void> static T CSharp_SetAudioInputCallbacks(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2278060))(0, jarg1, jarg2);
	}
	template <typename T = void> static T CSharp_AkTriangleProxy_Clear(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A2E9C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkTriangleProxy_DeleteName(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A2F7C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkTriangleProxy_GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A305C))(0);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkTriangleProxy() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A312C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkTriangleProxy(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A31FC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkSoundPathInfoProxy_GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A32DC))(0);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPathInfoProxy_GetReflectionPoint(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A33AC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPathInfoProxy_GetTriangle(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A3494))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSoundPathInfoProxy() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A357C))(0);
	}
	template <typename T = void> static T CSharp_delete_AkSoundPathInfoProxy(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A364C))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_AkPropagationPathInfoProxy_GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A372C))(0);
	}
	template <typename T = uintptr_t> static T CSharp_AkPropagationPathInfoProxy_GetNodePoint(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A37FC))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkPropagationPathInfoProxy() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A38E4))(0);
	}
	template <typename T = void> static T CSharp_delete_AkPropagationPathInfoProxy(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A39B4))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPropagationPathParams_listenerPos_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22A3A94))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPropagationPathParams_listenerPos_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A3B7C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPropagationPathParams_emitterPos_set(uintptr_t jarg1, uintptr_t jarg2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22A3C5C))(0, jarg1, jarg2);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPropagationPathParams_emitterPos_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A3D44))(0, jarg1);
	}
	template <typename T = void> static T CSharp_AkSoundPropagationPathParams_numValidPaths_set(uintptr_t jarg1, uint32_t jarg2) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x22A3E24))(0, jarg1, jarg2);
	}
	template <typename T = uint32_t> static T CSharp_AkSoundPropagationPathParams_numValidPaths_get(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A3F0C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_new_AkSoundPropagationPathParams() {
		return ((T (*)(void *))(Il2CppBase() + 0x22A3FEC))(0);
	}
	template <typename T = void> static T CSharp_delete_AkSoundPropagationPathParams(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A40BC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_Init(uintptr_t jarg1, uintptr_t jarg2, uintptr_t jarg3, uintptr_t jarg4, uintptr_t jarg5, uintptr_t jarg6, uintptr_t jarg7, uint32_t jarg8) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x22784D4))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8);
	}
	template <typename T = void> static T CSharp_Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x2278680))(0);
	}
	template <typename T = int32_t> static T CSharp_RegisterGameObjInternal(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2278844))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_UnregisterGameObjInternal(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x2278A20))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_RegisterGameObjInternal_WithName(uint64_t jarg1, Il2CppString* jarg2) {
		return ((T (*)(void *, uint64_t, Il2CppString*))(Il2CppBase() + 0x2278C04))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_SetBasePath(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2278DBC))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetCurrentLanguage(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2278F64))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_LoadFilePackage(Il2CppString* jarg1, uintptr_t* jarg2, int32_t jarg3) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, int32_t))(Il2CppBase() + 0x2279124))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_AddBasePath(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22792F0))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetGameName(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2279498))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_SetDecodedBankPath(Il2CppString* jarg1) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2279640))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_LoadAndDecodeBank(Il2CppString* jarg1, bool jarg2, uintptr_t* jarg3) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x2279800))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_LoadAndDecodeBankFromMemory(uintptr_t jarg1, uint32_t jarg2, bool jarg3, Il2CppString* jarg4, bool jarg5, uintptr_t* jarg6) {
		return ((T (*)(void *, uintptr_t, uint32_t, bool, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x22799F8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = uintptr_t> static T CSharp_GetCurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x2279C18))(0);
	}
	template <typename T = int32_t> static T CSharp_UnloadFilePackage(uint32_t jarg1) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x2279E28))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_UnloadAllFilePackages() {
		return ((T (*)(void *))(Il2CppBase() + 0x2279FA0))(0);
	}
	template <typename T = int32_t> static T CSharp_SetObjectPosition(uint64_t jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10) {
		return ((T (*)(void *, uint64_t, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x227A1BC))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8, jarg9, jarg10);
	}
	template <typename T = int32_t> static T CSharp_GetSourceMultiplePlayPositions(uint32_t jarg1, Il2CppArray<uintptr_t>** jarg2, Il2CppArray<uintptr_t>** jarg3, Il2CppArray<uintptr_t>** jarg4, uintptr_t jarg5, bool jarg6) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**, uintptr_t, bool))(Il2CppBase() + 0x227A3B8))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_SetListeners(uint64_t jarg1, Il2CppArray<uintptr_t>* jarg2, uint32_t jarg3) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x227A72C))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_SetDefaultListeners(Il2CppArray<uintptr_t>* jarg1, uint32_t jarg2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x227A8CC))(0, jarg1, jarg2);
	}
	template <typename T = int32_t> static T CSharp_AddOutput(uintptr_t jarg1, uintptr_t* jarg2, Il2CppArray<uintptr_t>* jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x227AA90))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = void> static T CSharp_GetDefaultStreamSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227ACB8))(0, jarg1);
	}
	template <typename T = void> static T CSharp_GetDefaultDeviceSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227AE4C))(0, jarg1);
	}
	template <typename T = void> static T CSharp_GetDefaultMusicSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227AFE0))(0, jarg1);
	}
	template <typename T = void> static T CSharp_GetDefaultInitSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227B174))(0, jarg1);
	}
	template <typename T = void> static T CSharp_GetDefaultPlatformInitSettings(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227B308))(0, jarg1);
	}
	template <typename T = uint32_t> static T CSharp_GetMajorMinorVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x227B480))(0);
	}
	template <typename T = uint32_t> static T CSharp_GetSubminorBuildVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x227B5E8))(0);
	}
	template <typename T = int32_t> static T CSharp_QueryIndirectPaths(uint64_t jarg1, uintptr_t jarg2, uintptr_t jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x227B8F0))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_QuerySoundPropagationPaths(uint64_t jarg1, uintptr_t jarg2, uintptr_t jarg3, uint32_t jarg4) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x227BB90))(0, jarg1, jarg2, jarg3, jarg4);
	}
	template <typename T = int32_t> static T CSharp_SetRoomPortal(uint64_t jarg1, uintptr_t jarg2, uintptr_t jarg3, bool jarg4, uint64_t jarg5, uint64_t jarg6) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t, bool, uint64_t, uint64_t))(Il2CppBase() + 0x227BF00))(0, jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
	}
	template <typename T = int32_t> static T CSharp_SetRoom(uint64_t jarg1, uintptr_t jarg2, Il2CppString* jarg3) {
		return ((T (*)(void *, uint64_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x227C0E4))(0, jarg1, jarg2, jarg3);
	}
	template <typename T = int32_t> static T CSharp_RegisterSpatialAudioListener(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x227C2F8))(0, jarg1);
	}
	template <typename T = int32_t> static T CSharp_UnregisterSpatialAudioListener(uint64_t jarg1) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x227C4D4))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPlaylist_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A419C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIPost_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A427C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkEventCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A435C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMIDIEventCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A443C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMarkerCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A451C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkDurationCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A45FC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A46DC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMusicSyncCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A47BC))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A489C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkTriangleProxy_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A497C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkSoundPathInfoProxy_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A4A5C))(0, jarg1);
	}
	template <typename T = uintptr_t> static T CSharp_AkPropagationPathInfoProxy_SWIGUpcast(uintptr_t jarg1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22A4B3C))(0, jarg1);
	}

};

}
