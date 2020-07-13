#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpSeasonSpecialUIConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpSeasonSpecialUIConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Season_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Special_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Scale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Pos_x() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Pos_y() {
		return *(T*)((uintptr_t)this + 0x20);
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
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7AC4))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7B64))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpSeasonSpecialUIConfig*, int32_t))(Il2CppBase() + 0x30E7B6C))(this, value);
	}
	template <typename T = int32_t> T get_Season_id() {
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7B74))(this);
	}
	template <typename T = void> T set_Season_id(int32_t value) {
		return ((T (*)(SpSeasonSpecialUIConfig*, int32_t))(Il2CppBase() + 0x30E7B7C))(this, value);
	}
	template <typename T = int32_t> T get_Special_type() {
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7B84))(this);
	}
	template <typename T = void> T set_Special_type(int32_t value) {
		return ((T (*)(SpSeasonSpecialUIConfig*, int32_t))(Il2CppBase() + 0x30E7B8C))(this, value);
	}
	template <typename T = float> T get_Scale() {
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7B94))(this);
	}
	template <typename T = void> T set_Scale(float value) {
		return ((T (*)(SpSeasonSpecialUIConfig*, float))(Il2CppBase() + 0x30E7B9C))(this, value);
	}
	template <typename T = int32_t> T get_Pos_x() {
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7BA4))(this);
	}
	template <typename T = void> T set_Pos_x(int32_t value) {
		return ((T (*)(SpSeasonSpecialUIConfig*, int32_t))(Il2CppBase() + 0x30E7BAC))(this, value);
	}
	template <typename T = int32_t> T get_Pos_y() {
		return ((T (*)(SpSeasonSpecialUIConfig*))(Il2CppBase() + 0x30E7BB4))(this);
	}
	template <typename T = void> T set_Pos_y(int32_t value) {
		return ((T (*)(SpSeasonSpecialUIConfig*, int32_t))(Il2CppBase() + 0x30E7BBC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpSeasonSpecialUIConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E7BC4))(this, bytes, position);
	}

};

}
