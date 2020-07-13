#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CodActivityTopConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CodActivityTopConfig"));
	}

	template <typename T = int32_t> T& Top_seq() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LocID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Show_pic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Show_pic_url() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& BHot() {
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
		return ((T (*)(CodActivityTopConfig*))(Il2CppBase() + 0x462C178))(this);
	}
	template <typename T = int32_t> T get_Top_seq() {
		return ((T (*)(CodActivityTopConfig*))(Il2CppBase() + 0x462C218))(this);
	}
	template <typename T = void> T set_Top_seq(int32_t value) {
		return ((T (*)(CodActivityTopConfig*, int32_t))(Il2CppBase() + 0x462C220))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocID() {
		return ((T (*)(CodActivityTopConfig*))(Il2CppBase() + 0x462C228))(this);
	}
	template <typename T = void> T set_LocID(Il2CppString* value) {
		return ((T (*)(CodActivityTopConfig*, Il2CppString*))(Il2CppBase() + 0x462C230))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_pic() {
		return ((T (*)(CodActivityTopConfig*))(Il2CppBase() + 0x462C238))(this);
	}
	template <typename T = void> T set_Show_pic(Il2CppString* value) {
		return ((T (*)(CodActivityTopConfig*, Il2CppString*))(Il2CppBase() + 0x462C240))(this, value);
	}
	template <typename T = Il2CppString*> T get_Show_pic_url() {
		return ((T (*)(CodActivityTopConfig*))(Il2CppBase() + 0x462C248))(this);
	}
	template <typename T = void> T set_Show_pic_url(Il2CppString* value) {
		return ((T (*)(CodActivityTopConfig*, Il2CppString*))(Il2CppBase() + 0x462C250))(this, value);
	}
	template <typename T = bool> T get_BHot() {
		return ((T (*)(CodActivityTopConfig*))(Il2CppBase() + 0x462C258))(this);
	}
	template <typename T = void> T set_BHot(bool value) {
		return ((T (*)(CodActivityTopConfig*, bool))(Il2CppBase() + 0x462C260))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CodActivityTopConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462C268))(this, bytes, position);
	}

};

}
