#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CodActivityChristmasAllInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CodActivityChristmasAllInfoConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& OpenTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& TitleDes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& TimeDes() {
		return *(T*)((uintptr_t)this + 0x1C);
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
		return ((T (*)(CodActivityChristmasAllInfoConfig*))(Il2CppBase() + 0x2D5E49C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(CodActivityChristmasAllInfoConfig*))(Il2CppBase() + 0x2D5E53C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(CodActivityChristmasAllInfoConfig*, int32_t))(Il2CppBase() + 0x2D5E544))(this, value);
	}
	template <typename T = int32_t> T get_OpenTime() {
		return ((T (*)(CodActivityChristmasAllInfoConfig*))(Il2CppBase() + 0x2D5E54C))(this);
	}
	template <typename T = void> T set_OpenTime(int32_t value) {
		return ((T (*)(CodActivityChristmasAllInfoConfig*, int32_t))(Il2CppBase() + 0x2D5E554))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(CodActivityChristmasAllInfoConfig*))(Il2CppBase() + 0x2D5E55C))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(CodActivityChristmasAllInfoConfig*, int32_t))(Il2CppBase() + 0x2D5E564))(this, value);
	}
	template <typename T = Il2CppString*> T get_TitleDes() {
		return ((T (*)(CodActivityChristmasAllInfoConfig*))(Il2CppBase() + 0x2D5E56C))(this);
	}
	template <typename T = void> T set_TitleDes(Il2CppString* value) {
		return ((T (*)(CodActivityChristmasAllInfoConfig*, Il2CppString*))(Il2CppBase() + 0x2D5E574))(this, value);
	}
	template <typename T = Il2CppString*> T get_TimeDes() {
		return ((T (*)(CodActivityChristmasAllInfoConfig*))(Il2CppBase() + 0x2D5E57C))(this);
	}
	template <typename T = void> T set_TimeDes(Il2CppString* value) {
		return ((T (*)(CodActivityChristmasAllInfoConfig*, Il2CppString*))(Il2CppBase() + 0x2D5E584))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CodActivityChristmasAllInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5E58C))(this, bytes, position);
	}

};

}
