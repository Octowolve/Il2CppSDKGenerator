#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PVESkillConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PVESkillConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaxUltLayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ActiveEnergy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& IncSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ConsumeSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& UseInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Param() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& NeedPredict() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& CanUseInAir() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& CanUseInWater() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = int32_t> T& CheckUseSpaceType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& ValidUseSpaceSize() {
		return *(T*)((uintptr_t)this + 0x40);
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

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B8C0))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B960))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(PVESkillConfConfig*, uint32_t))(Il2CppBase() + 0x378B968))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B970))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378B978))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B980))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PVESkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x378B988))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B990))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B9A0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(PVESkillConfConfig*, Il2CppString*))(Il2CppBase() + 0x378B9A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B9B0))(this);
	}
	template <typename T = int32_t> T get_MaxUltLayer() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B9C0))(this);
	}
	template <typename T = void> T set_MaxUltLayer(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378B9C8))(this, value);
	}
	template <typename T = int32_t> T get_ActiveEnergy() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B9D0))(this);
	}
	template <typename T = void> T set_ActiveEnergy(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378B9D8))(this, value);
	}
	template <typename T = int32_t> T get_IncSpeed() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B9E0))(this);
	}
	template <typename T = void> T set_IncSpeed(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378B9E8))(this, value);
	}
	template <typename T = int32_t> T get_ConsumeSpeed() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378B9F0))(this);
	}
	template <typename T = void> T set_ConsumeSpeed(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378B9F8))(this, value);
	}
	template <typename T = float> T get_UseInterval() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA00))(this);
	}
	template <typename T = void> T set_UseInterval(float value) {
		return ((T (*)(PVESkillConfConfig*, float))(Il2CppBase() + 0x378BA08))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Param() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA10))(this);
	}
	template <typename T = void> T set_Param(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PVESkillConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x378BA18))(this, value);
	}
	template <typename T = int32_t> T get_NeedPredict() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA20))(this);
	}
	template <typename T = void> T set_NeedPredict(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378BA28))(this, value);
	}
	template <typename T = bool> T get_CanUseInAir() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA30))(this);
	}
	template <typename T = void> T set_CanUseInAir(bool value) {
		return ((T (*)(PVESkillConfConfig*, bool))(Il2CppBase() + 0x378BA38))(this, value);
	}
	template <typename T = bool> T get_CanUseInWater() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA40))(this);
	}
	template <typename T = void> T set_CanUseInWater(bool value) {
		return ((T (*)(PVESkillConfConfig*, bool))(Il2CppBase() + 0x378BA48))(this, value);
	}
	template <typename T = int32_t> T get_CheckUseSpaceType() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA50))(this);
	}
	template <typename T = void> T set_CheckUseSpaceType(int32_t value) {
		return ((T (*)(PVESkillConfConfig*, int32_t))(Il2CppBase() + 0x378BA58))(this, value);
	}
	template <typename T = float> T get_ValidUseSpaceSize() {
		return ((T (*)(PVESkillConfConfig*))(Il2CppBase() + 0x378BA60))(this);
	}
	template <typename T = void> T set_ValidUseSpaceSize(float value) {
		return ((T (*)(PVESkillConfConfig*, float))(Il2CppBase() + 0x378BA68))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PVESkillConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378BA70))(this, bytes, position);
	}

};

}
