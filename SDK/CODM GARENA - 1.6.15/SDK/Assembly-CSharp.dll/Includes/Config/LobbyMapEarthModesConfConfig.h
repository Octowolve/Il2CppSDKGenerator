#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LobbyMapEarthModesConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LobbyMapEarthModesConfConfig"));
	}

	template <typename T = uintptr_t> T& EModeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ModeID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PlaceName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Z() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_EModeID() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x3776734))(this);
	}
	template <typename T = void> T set_EModeID(uintptr_t value) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, uintptr_t))(Il2CppBase() + 0x377673C))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x3776744))(this);
	}
	template <typename T = int32_t> T get_ModeID() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x37767E8))(this);
	}
	template <typename T = void> T set_ModeID(int32_t value) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, int32_t))(Il2CppBase() + 0x37767F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaceName() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x37767F8))(this);
	}
	template <typename T = void> T set_PlaceName(Il2CppString* value) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, Il2CppString*))(Il2CppBase() + 0x3776800))(this, value);
	}
	template <typename T = float> T get_X() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x3776808))(this);
	}
	template <typename T = void> T set_X(float value) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, float))(Il2CppBase() + 0x3776810))(this, value);
	}
	template <typename T = float> T get_Y() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x3776818))(this);
	}
	template <typename T = void> T set_Y(float value) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, float))(Il2CppBase() + 0x3776820))(this, value);
	}
	template <typename T = float> T get_Z() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x3776828))(this);
	}
	template <typename T = void> T set_Z(float value) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, float))(Il2CppBase() + 0x3776830))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LobbyMapEarthModesConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3776838))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LobbyMapEarthModesConfConfig*))(Il2CppBase() + 0x37769A8))(this);
	}

};

}
