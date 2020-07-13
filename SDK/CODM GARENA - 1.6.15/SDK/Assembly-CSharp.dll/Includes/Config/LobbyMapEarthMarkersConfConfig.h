#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LobbyMapEarthMarkersConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LobbyMapEarthMarkersConfConfig"));
	}

	template <typename T = int32_t> T& MarkerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ModeID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Z() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& LX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LY() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& CX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& CY() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Scale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776324))(this);
	}
	template <typename T = int32_t> T get_MarkerID() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x37763C4))(this);
	}
	template <typename T = void> T set_MarkerID(int32_t value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, int32_t))(Il2CppBase() + 0x37763CC))(this, value);
	}
	template <typename T = int32_t> T get_ModeID() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x37763D4))(this);
	}
	template <typename T = void> T set_ModeID(int32_t value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, int32_t))(Il2CppBase() + 0x37763DC))(this, value);
	}
	template <typename T = float> T get_X() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x37763E4))(this);
	}
	template <typename T = void> T set_X(float value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, float))(Il2CppBase() + 0x37763EC))(this, value);
	}
	template <typename T = float> T get_Y() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x37763F4))(this);
	}
	template <typename T = void> T set_Y(float value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, float))(Il2CppBase() + 0x37763FC))(this, value);
	}
	template <typename T = float> T get_Z() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776404))(this);
	}
	template <typename T = void> T set_Z(float value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, float))(Il2CppBase() + 0x377640C))(this, value);
	}
	template <typename T = int32_t> T get_LX() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776414))(this);
	}
	template <typename T = void> T set_LX(int32_t value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, int32_t))(Il2CppBase() + 0x377641C))(this, value);
	}
	template <typename T = int32_t> T get_LY() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776424))(this);
	}
	template <typename T = void> T set_LY(int32_t value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, int32_t))(Il2CppBase() + 0x377642C))(this, value);
	}
	template <typename T = int32_t> T get_CX() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776434))(this);
	}
	template <typename T = void> T set_CX(int32_t value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, int32_t))(Il2CppBase() + 0x377643C))(this, value);
	}
	template <typename T = int32_t> T get_CY() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776444))(this);
	}
	template <typename T = void> T set_CY(int32_t value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, int32_t))(Il2CppBase() + 0x377644C))(this, value);
	}
	template <typename T = float> T get_Scale() {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*))(Il2CppBase() + 0x3776454))(this);
	}
	template <typename T = void> T set_Scale(float value) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, float))(Il2CppBase() + 0x377645C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LobbyMapEarthMarkersConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3776464))(this, bytes, position);
	}

};

}
