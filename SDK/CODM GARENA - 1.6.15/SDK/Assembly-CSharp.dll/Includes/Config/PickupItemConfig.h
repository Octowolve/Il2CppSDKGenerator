#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PickupItemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PickupItemConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsPowerUp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Buff0() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Buff1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Buff2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Buff3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& ContinuousTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ScreenEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& ScreenEffectLastTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsEffectAll() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsULT() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppString*> T& Sound1P() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Sound3P() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsShowTips() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& TipsSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TipsColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& BuffStateColor() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& BuffStateNoColor() {
		return *(T*)((uintptr_t)this + 0x58);
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
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780DF8))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780E98))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780EA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780EA8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780EB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780EB8))(this);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780EC8))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780ED0))(this, value);
	}
	template <typename T = bool> T get_IsPowerUp() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780ED8))(this);
	}
	template <typename T = void> T set_IsPowerUp(bool value) {
		return ((T (*)(PickupItemConfig*, bool))(Il2CppBase() + 0x3780EE0))(this, value);
	}
	template <typename T = int32_t> T get_Buff0() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780EE8))(this);
	}
	template <typename T = void> T set_Buff0(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780EF0))(this, value);
	}
	template <typename T = int32_t> T get_Buff1() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780EF8))(this);
	}
	template <typename T = void> T set_Buff1(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780F00))(this, value);
	}
	template <typename T = int32_t> T get_Buff2() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F08))(this);
	}
	template <typename T = void> T set_Buff2(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780F10))(this, value);
	}
	template <typename T = int32_t> T get_Buff3() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F18))(this);
	}
	template <typename T = void> T set_Buff3(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780F20))(this, value);
	}
	template <typename T = float> T get_ContinuousTime() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F28))(this);
	}
	template <typename T = void> T set_ContinuousTime(float value) {
		return ((T (*)(PickupItemConfig*, float))(Il2CppBase() + 0x3780F30))(this, value);
	}
	template <typename T = int32_t> T get_ScreenEffectAssetID() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F38))(this);
	}
	template <typename T = void> T set_ScreenEffectAssetID(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780F40))(this, value);
	}
	template <typename T = float> T get_ScreenEffectLastTime() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F48))(this);
	}
	template <typename T = void> T set_ScreenEffectLastTime(float value) {
		return ((T (*)(PickupItemConfig*, float))(Il2CppBase() + 0x3780F50))(this, value);
	}
	template <typename T = bool> T get_IsEffectAll() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F58))(this);
	}
	template <typename T = void> T set_IsEffectAll(bool value) {
		return ((T (*)(PickupItemConfig*, bool))(Il2CppBase() + 0x3780F60))(this, value);
	}
	template <typename T = bool> T get_IsULT() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F68))(this);
	}
	template <typename T = void> T set_IsULT(bool value) {
		return ((T (*)(PickupItemConfig*, bool))(Il2CppBase() + 0x3780F70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sound1P() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F78))(this);
	}
	template <typename T = void> T set_Sound1P(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780F80))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sound3P() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F88))(this);
	}
	template <typename T = void> T set_Sound3P(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780F90))(this, value);
	}
	template <typename T = bool> T get_IsShowTips() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780F98))(this);
	}
	template <typename T = void> T set_IsShowTips(bool value) {
		return ((T (*)(PickupItemConfig*, bool))(Il2CppBase() + 0x3780FA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TipsSprite() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780FA8))(this);
	}
	template <typename T = void> T set_TipsSprite(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780FB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TipsLabel() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780FB8))(this);
	}
	template <typename T = void> T set_TipsLabel(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780FC0))(this, value);
	}
	template <typename T = int32_t> T get_TipsColor() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780FC8))(this);
	}
	template <typename T = void> T set_TipsColor(int32_t value) {
		return ((T (*)(PickupItemConfig*, int32_t))(Il2CppBase() + 0x3780FD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_BuffStateColor() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780FD8))(this);
	}
	template <typename T = void> T set_BuffStateColor(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780FE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_BuffStateNoColor() {
		return ((T (*)(PickupItemConfig*))(Il2CppBase() + 0x3780FE8))(this);
	}
	template <typename T = void> T set_BuffStateNoColor(Il2CppString* value) {
		return ((T (*)(PickupItemConfig*, Il2CppString*))(Il2CppBase() + 0x3780FF0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PickupItemConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3780FF8))(this, bytes, position);
	}

};

}
