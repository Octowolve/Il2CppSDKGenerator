#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ExplodeFire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ExplodeFire"));
	}

	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_ActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Location() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_NeedDestroy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_CurTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Effect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_FadeComp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& m_FadeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isFading() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ExplodeFire*))(Il2CppBase() + 0x31CFD10))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ExplodeFire*, bool))(Il2CppBase() + 0x31CFD18))(this, value);
	}
	template <typename T = int32_t> T get_ActorId() {
		return ((T (*)(ExplodeFire*))(Il2CppBase() + 0x31CFD20))(this);
	}
	template <typename T = bool> T get_NeedDestroy() {
		return ((T (*)(ExplodeFire*))(Il2CppBase() + 0x31CFD28))(this);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ExplodeFire*))(Il2CppBase() + 0x31CFD30))(this);
	}
	template <typename T = void> T Init(int32_t actorId, int32_t resourceId, Il2CppVector3 areaLocation, float timeInSecond) {
		return ((T (*)(ExplodeFire*, int32_t, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x31CFE68))(this, actorId, resourceId, areaLocation, timeInSecond);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ExplodeFire*, float))(Il2CppBase() + 0x31D0068))(this, deltaTime);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ExplodeFire*))(Il2CppBase() + 0x31D02A0))(this);
	}
	template <typename T = void> T ShowMesh(bool value) {
		return ((T (*)(ExplodeFire*, bool))(Il2CppBase() + 0x31D0400))(this, value);
	}
	template <typename T = void> T ResetPosition(Il2CppVector3 pos) {
		return ((T (*)(ExplodeFire*, Il2CppVector3))(Il2CppBase() + 0x31D056C))(this, pos);
	}
	template <typename T = void> T OnEffectLoadOver(uintptr_t effect) {
		return ((T (*)(ExplodeFire*, uintptr_t))(Il2CppBase() + 0x31D06D4))(this, effect);
	}

};

}
