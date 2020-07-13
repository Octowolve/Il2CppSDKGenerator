#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class UAVAirplaneInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "UAVAirplaneInfoConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& HP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DefauleFlySpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DisplayFlySpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CruisePercent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& WarnningDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DestorySocre() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MeshID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Length() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ResistanceID() {
		return *(T*)((uintptr_t)this + 0x38);
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
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0368))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0408))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0410))(this, value);
	}
	template <typename T = float> T get_HP() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0418))(this);
	}
	template <typename T = void> T set_HP(float value) {
		return ((T (*)(UAVAirplaneInfoConfig*, float))(Il2CppBase() + 0x30F0420))(this, value);
	}
	template <typename T = float> T get_DefauleFlySpeed() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0428))(this);
	}
	template <typename T = void> T set_DefauleFlySpeed(float value) {
		return ((T (*)(UAVAirplaneInfoConfig*, float))(Il2CppBase() + 0x30F0430))(this, value);
	}
	template <typename T = int32_t> T get_DisplayFlySpeed() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0438))(this);
	}
	template <typename T = void> T set_DisplayFlySpeed(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0440))(this, value);
	}
	template <typename T = int32_t> T get_CruisePercent() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0448))(this);
	}
	template <typename T = void> T set_CruisePercent(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0450))(this, value);
	}
	template <typename T = int32_t> T get_WarnningDistance() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0458))(this);
	}
	template <typename T = void> T set_WarnningDistance(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0460))(this, value);
	}
	template <typename T = int32_t> T get_DestorySocre() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0468))(this);
	}
	template <typename T = void> T set_DestorySocre(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0470))(this, value);
	}
	template <typename T = int32_t> T get_MeshID() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0478))(this);
	}
	template <typename T = void> T set_MeshID(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0480))(this, value);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0488))(this);
	}
	template <typename T = void> T set_Width(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F0490))(this, value);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F0498))(this);
	}
	template <typename T = void> T set_Height(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F04A0))(this, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F04A8))(this);
	}
	template <typename T = void> T set_Length(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F04B0))(this, value);
	}
	template <typename T = int32_t> T get_ResistanceID() {
		return ((T (*)(UAVAirplaneInfoConfig*))(Il2CppBase() + 0x30F04B8))(this);
	}
	template <typename T = void> T set_ResistanceID(int32_t value) {
		return ((T (*)(UAVAirplaneInfoConfig*, int32_t))(Il2CppBase() + 0x30F04C0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(UAVAirplaneInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F04C8))(this, bytes, position);
	}

};

}
