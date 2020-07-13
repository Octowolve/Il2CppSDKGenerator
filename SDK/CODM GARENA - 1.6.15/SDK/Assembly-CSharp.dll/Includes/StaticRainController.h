#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StaticRainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StaticRainController"));
	}

	template <typename T = uintptr_t> T& Variables() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RenderQueue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RainCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& NoMoreRain() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ShaderType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& VRMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& staticDrawer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_Variables() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x3952764))(this);
	}
	template <typename T = void> T set_Variables(uintptr_t value) {
		return ((T (*)(StaticRainController*, uintptr_t))(Il2CppBase() + 0x3952670))(this, value);
	}
	template <typename T = int32_t> T get_RenderQueue() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x395276C))(this);
	}
	template <typename T = void> T set_RenderQueue(int32_t value) {
		return ((T (*)(StaticRainController*, int32_t))(Il2CppBase() + 0x39520FC))(this, value);
	}
	template <typename T = uintptr_t> T get_RainCamera() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x3952774))(this);
	}
	template <typename T = void> T set_RainCamera(uintptr_t value) {
		return ((T (*)(StaticRainController*, uintptr_t))(Il2CppBase() + 0x3952678))(this, value);
	}
	template <typename T = float> T get_Alpha() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x395277C))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(StaticRainController*, float))(Il2CppBase() + 0x39525AC))(this, value);
	}
	template <typename T = bool> T get_NoMoreRain() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x3952784))(this);
	}
	template <typename T = void> T set_NoMoreRain(bool value) {
		return ((T (*)(StaticRainController*, bool))(Il2CppBase() + 0x3951B54))(this, value);
	}
	template <typename T = uintptr_t> T get_ShaderType() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x395278C))(this);
	}
	template <typename T = void> T set_ShaderType(uintptr_t value) {
		return ((T (*)(StaticRainController*, uintptr_t))(Il2CppBase() + 0x39525A4))(this, value);
	}
	template <typename T = bool> T get_VRMode() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x3952794))(this);
	}
	template <typename T = void> T set_VRMode(bool value) {
		return ((T (*)(StaticRainController*, bool))(Il2CppBase() + 0x39525B4))(this, value);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x3951634))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x39519D0))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x3951C94))(this);
	}
	template <typename T = void> T UpdateController() {
		return ((T (*)(StaticRainController*))(Il2CppBase() + 0x39525BC))(this);
	}
	template <typename T = float> T GetProgress(uintptr_t dc) {
		return ((T (*)(StaticRainController*, uintptr_t))(Il2CppBase() + 0x395313C))(this, dc);
	}
	template <typename T = void> T InitializeInstance(uintptr_t dc) {
		return ((T (*)(StaticRainController*, uintptr_t))(Il2CppBase() + 0x3952878))(this, dc);
	}
	template <typename T = void> T UpdateInstance(uintptr_t dc) {
		return ((T (*)(StaticRainController*, uintptr_t))(Il2CppBase() + 0x3952980))(this, dc);
	}

};

}
