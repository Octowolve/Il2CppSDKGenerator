#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class Helper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "Helper"));
	}

	template <typename T = Il2CppString*> static T& ScriptVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetErrorMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatrixForOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupStereoEyeModeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupLayoutMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupStereoMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupAlphaPackedMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupGammaMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertTimeSecondsToFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFrameToTimeSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindNextKeyFrameTimeSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertSecondsSince1970ToDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReadableTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseTimeToMs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSubtitlesSRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = Il2CppString*> static T GetName(uintptr_t platform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x410F680))(0, platform);
	}
	template <typename T = Il2CppString*> static T GetErrorMessage(uintptr_t code) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x410F7DC))(0, code);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetPlatformNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x410F980))(0);
	}
	template <typename T = void> static T LogInfo(Il2CppString* message, uintptr_t context) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x410FD0C))(0, message, context);
	}
	template <typename T = Il2CppString*> static T GetTimeString(float totalSeconds, bool showMilliseconds) {
		return ((T (*)(void *, float, bool))(Il2CppBase() + 0x410FF3C))(0, totalSeconds, showMilliseconds);
	}
	template <typename T = uintptr_t> static T GetOrientation(Il2CppArray<uintptr_t>* t) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41105B4))(0, t);
	}
	template <typename T = uintptr_t> static T GetMatrixForOrientation(uintptr_t ori) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41108D0))(0, ori);
	}
	template <typename T = void> static T SetupStereoEyeModeMaterial(uintptr_t material, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4110E2C))(0, material, mode);
	}
	template <typename T = void> static T SetupLayoutMaterial(uintptr_t material, uintptr_t mapping) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4110FF4))(0, material, mapping);
	}
	template <typename T = void> static T SetupStereoMaterial(uintptr_t material, uintptr_t packing, bool displayDebugTinting) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4111118))(0, material, packing, displayDebugTinting);
	}
	template <typename T = void> static T SetupAlphaPackedMaterial(uintptr_t material, uintptr_t packing) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41112FC))(0, material, packing);
	}
	template <typename T = void> static T SetupGammaMaterial(uintptr_t material, bool playerSupportsLinear) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4111458))(0, material, playerSupportsLinear);
	}
	template <typename T = int32_t> static T ConvertTimeSecondsToFrame(float seconds, float frameRate) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x4111560))(0, seconds, frameRate);
	}
	template <typename T = float> static T ConvertFrameToTimeSeconds(int32_t frame, float frameRate) {
		return ((T (*)(void *, int32_t, float))(Il2CppBase() + 0x4111664))(0, frame, frameRate);
	}
	template <typename T = float> static T FindNextKeyFrameTimeSeconds(float seconds, float frameRate, int32_t keyFrameInterval) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x4111730))(0, seconds, frameRate, keyFrameInterval);
	}
	template <typename T = uintptr_t> static T ConvertSecondsSince1970ToDateTime(double secondsSince1970) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4111868))(0, secondsSince1970);
	}
	template <typename T = void> static T DrawTexture(Il2CppRect screenRect, uintptr_t texture, uintptr_t scaleMode, uintptr_t alphaPacking, uintptr_t material) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41119C0))(0, screenRect, texture, scaleMode, alphaPacking, material);
	}
	template <typename T = uintptr_t> static T GetReadableTexture(uintptr_t inputTexture, bool requiresVerticalFlip, uintptr_t ori, uintptr_t targetTexture) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x4111E7C))(0, inputTexture, requiresVerticalFlip, ori, targetTexture);
	}
	template <typename T = int32_t> static T ParseTimeToMs(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4112340))(0, text);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T LoadSubtitlesSRT(Il2CppString* data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x410EB30))(0, data);
	}

};

}
