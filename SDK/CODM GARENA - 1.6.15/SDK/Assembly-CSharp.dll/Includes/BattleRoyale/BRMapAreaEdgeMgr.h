#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMapAreaEdgeMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMapAreaEdgeMgr"));
	}

	template <typename T = uintptr_t> T& m_Gps() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllAreas() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAreaEdgeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAreaEdgeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsInArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_gps() {
		return ((T (*)(BRMapAreaEdgeMgr*))(Il2CppBase() + 0x19524CC))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRMapAreaEdgeMgr*, uintptr_t))(Il2CppBase() + 0x1952630))(this, levelObject);
	}
	template <typename T = void> T Register(uintptr_t area) {
		return ((T (*)(BRMapAreaEdgeMgr*, uintptr_t))(Il2CppBase() + 0x1952788))(this, area);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T GetAreaEdgeList(uintptr_t type) {
		return ((T (*)(BRMapAreaEdgeMgr*, uintptr_t))(Il2CppBase() + 0x19528E8))(this, type);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T GetAreaEdgeList_1(int32_t index) {
		return ((T (*)(BRMapAreaEdgeMgr*, int32_t))(Il2CppBase() + 0x1952998))(this, index);
	}
	template <typename T = bool> T IsInArea(uintptr_t type, Il2CppVector3 pos) {
		return ((T (*)(BRMapAreaEdgeMgr*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1952AE4))(this, type, pos);
	}
	template <typename T = bool> T IsInArea_1(Il2CppList<Il2CppVector2>* edgeList, Il2CppVector2 q) {
		return ((T (*)(BRMapAreaEdgeMgr*, Il2CppList<Il2CppVector2>*, Il2CppVector2))(Il2CppBase() + 0x1952C84))(this, edgeList, q);
	}
	template <typename T = bool> T Equals(Il2CppVector2 p1, Il2CppVector2 p2) {
		return ((T (*)(BRMapAreaEdgeMgr*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x1952F64))(this, p1, p2);
	}
	template <typename T = bool> T Equals_1(float a, float b) {
		return ((T (*)(BRMapAreaEdgeMgr*, float, float))(Il2CppBase() + 0x1953058))(this, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRMapAreaEdgeMgr*, uintptr_t))(Il2CppBase() + 0x1953178))(this, P0);
	}

};

}
