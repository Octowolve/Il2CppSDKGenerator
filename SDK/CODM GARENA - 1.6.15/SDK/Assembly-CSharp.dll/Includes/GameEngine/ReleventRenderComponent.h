#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ReleventRenderComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ReleventRenderComponent"));
	}

	template <typename T = bool> T& m_bRecentlyRendered() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& m_bLastOccVisible() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& m_Inited() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = float> T& m_TickLodTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CheckLodTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_DoSendTransformChangeCDTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TickDoSendTransformChangeCDTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& m_TickDoSendTransformChangeCDTime_UnRecentRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& DoCalcDistanceToSendTransformChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<void*>*> T& m_TickSendTransformChangedTimeList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& MeshClothValidDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& Tick_DistanceLogicUnRecentlyRenderedReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickRecentlyRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DistanceLogicRecentlyRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DistanceLogicUnRecentlyRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_DistanceLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick_ClothDistanceActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> T get_LastOccVisible() {
		return ((T (*)(ReleventRenderComponent*))(Il2CppBase() + 0x1DFD170))(this);
	}
	template <typename T = bool> T get_RecentlyRendered() {
		return ((T (*)(ReleventRenderComponent*))(Il2CppBase() + 0x1DFD178))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(ReleventRenderComponent*, uintptr_t))(Il2CppBase() + 0x1DFD180))(this, pawn);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ReleventRenderComponent*, float))(Il2CppBase() + 0x1DFD304))(this, deltaTime);
	}
	template <typename T = void> T TickRecentlyRendered(bool occVisible) {
		return ((T (*)(ReleventRenderComponent*, bool))(Il2CppBase() + 0x1DFD538))(this, occVisible);
	}
	template <typename T = void> T Tick_DistanceLogicRecentlyRendered(float deltaTime) {
		return ((T (*)(ReleventRenderComponent*, float))(Il2CppBase() + 0x1DFD970))(this, deltaTime);
	}
	template <typename T = void> T Tick_DistanceLogicUnRecentlyRendered(float deltaTime) {
		return ((T (*)(ReleventRenderComponent*, float))(Il2CppBase() + 0x1DFDCF4))(this, deltaTime);
	}
	template <typename T = void> T Tick_DistanceLogic(float deltaTime) {
		return ((T (*)(ReleventRenderComponent*, float))(Il2CppBase() + 0x1DFD830))(this, deltaTime);
	}
	template <typename T = void> T Tick_ClothDistanceActive(float distance) {
		return ((T (*)(ReleventRenderComponent*, float))(Il2CppBase() + 0x1DFDF04))(this, distance);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(ReleventRenderComponent*, uintptr_t))(Il2CppBase() + 0x1DFE13C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ReleventRenderComponent*, float))(Il2CppBase() + 0x1DFE144))(this, P0);
	}

};

}
