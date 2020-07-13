#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineVolume"));
	}

	template <typename T = int32_t> T& m_SegmentIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Zipline() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_IsLocalPlayerIn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndGetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_ZipLine() {
		return ((T (*)(BRZiplineVolume*))(Il2CppBase() + 0x2671350))(this);
	}
	template <typename T = uintptr_t> T get_SegmentData() {
		return ((T (*)(BRZiplineVolume*))(Il2CppBase() + 0x2671358))(this);
	}
	template <typename T = void> T Init(int32_t idx, uintptr_t zipline) {
		return ((T (*)(BRZiplineVolume*, int32_t, uintptr_t))(Il2CppBase() + 0x2670728))(this, idx, zipline);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRZiplineVolume*, uintptr_t))(Il2CppBase() + 0x26792E8))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRZiplineVolume*, uintptr_t))(Il2CppBase() + 0x267950C))(this, other);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRZiplineVolume*))(Il2CppBase() + 0x26795D4))(this);
	}
	template <typename T = uintptr_t> T CheckAndGetComponent(uintptr_t other) {
		return ((T (*)(BRZiplineVolume*, uintptr_t))(Il2CppBase() + 0x26793B4))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(BRZiplineVolume*, uintptr_t))(Il2CppBase() + 0x2679724))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(BRZiplineVolume*, uintptr_t))(Il2CppBase() + 0x267972C))(this, P0);
	}

};

}
