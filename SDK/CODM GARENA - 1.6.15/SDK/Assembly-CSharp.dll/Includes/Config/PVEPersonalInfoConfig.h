#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PVEPersonalInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PVEPersonalInfoConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& NormalIcon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& HardIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& NormalMin_Round() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& NormalMax_Round() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& HardMin_Round() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& HardMax_Round() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& BossPrioroty() {
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
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B4B0))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B550))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B558))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B560))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B568))(this, value);
	}
	template <typename T = Il2CppString*> T get_NormalIcon() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B570))(this);
	}
	template <typename T = void> T set_NormalIcon(Il2CppString* value) {
		return ((T (*)(PVEPersonalInfoConfig*, Il2CppString*))(Il2CppBase() + 0x378B578))(this, value);
	}
	template <typename T = Il2CppString*> T get_HardIcon() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B580))(this);
	}
	template <typename T = void> T set_HardIcon(Il2CppString* value) {
		return ((T (*)(PVEPersonalInfoConfig*, Il2CppString*))(Il2CppBase() + 0x378B588))(this, value);
	}
	template <typename T = int32_t> T get_Mode() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B590))(this);
	}
	template <typename T = void> T set_Mode(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B598))(this, value);
	}
	template <typename T = int32_t> T get_NormalMin_Round() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B5A0))(this);
	}
	template <typename T = void> T set_NormalMin_Round(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B5A8))(this, value);
	}
	template <typename T = int32_t> T get_NormalMax_Round() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B5B0))(this);
	}
	template <typename T = void> T set_NormalMax_Round(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B5B8))(this, value);
	}
	template <typename T = int32_t> T get_HardMin_Round() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B5C0))(this);
	}
	template <typename T = void> T set_HardMin_Round(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B5C8))(this, value);
	}
	template <typename T = int32_t> T get_HardMax_Round() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B5D0))(this);
	}
	template <typename T = void> T set_HardMax_Round(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B5D8))(this, value);
	}
	template <typename T = int32_t> T get_BossPrioroty() {
		return ((T (*)(PVEPersonalInfoConfig*))(Il2CppBase() + 0x378B5E0))(this);
	}
	template <typename T = void> T set_BossPrioroty(int32_t value) {
		return ((T (*)(PVEPersonalInfoConfig*, int32_t))(Il2CppBase() + 0x378B5E8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PVEPersonalInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378B5F0))(this, bytes, position);
	}

};

}
