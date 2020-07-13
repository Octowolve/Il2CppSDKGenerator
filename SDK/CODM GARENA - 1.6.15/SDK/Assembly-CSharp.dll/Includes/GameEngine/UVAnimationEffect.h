#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UVAnimationEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UVAnimationEffect"));
	}

	template <typename T = Il2CppVector2> T& Tiling() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& StartOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& EndOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& SpeedCurve() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& Loop() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& PlayOnStart() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = int32_t> T& ActiveFrameInterval() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_TimeSincePlay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_LastActiveFrame() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Renderers() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUVOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7D564))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7D5FC))(this);
	}
	template <typename T = void> T UpdateUVOffset(float deltaTime) {
		return ((T (*)(UVAnimationEffect*, float))(Il2CppBase() + 0x2E7D6BC))(this, deltaTime);
	}
	template <typename T = void> T InitResource() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DA40))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DB10))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DC0C))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DDC0))(this);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DE6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitResource() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DF14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DF1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DF24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DF2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyEffect() {
		return ((T (*)(UVAnimationEffect*))(Il2CppBase() + 0x2E7DF34))(this);
	}

};

}
