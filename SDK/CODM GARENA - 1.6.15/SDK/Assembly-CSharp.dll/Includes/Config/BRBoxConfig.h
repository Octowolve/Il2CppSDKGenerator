#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRBoxConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRBoxConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SubItemType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ZombieBox() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Model() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ItemID1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ItemNum1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ItemID2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ItemNum2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ItemID3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ItemNum3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ItemID4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ItemNum4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ItemID5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ItemNum5() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ItemID6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ItemNum6() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& ItemID7() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& ItemNum7() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& ItemID8() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& ItemNum8() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& OpenSoundName() {
		return *(T*)((uintptr_t)this + 0x60);
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
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D429F4))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42A94))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42A9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42AA4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(BRBoxConfig*, Il2CppString*))(Il2CppBase() + 0x2D42AAC))(this, value);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42AB4))(this);
	}
	template <typename T = void> T set_SubItemType(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42ABC))(this, value);
	}
	template <typename T = bool> T get_ZombieBox() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42AC4))(this);
	}
	template <typename T = void> T set_ZombieBox(bool value) {
		return ((T (*)(BRBoxConfig*, bool))(Il2CppBase() + 0x2D42ACC))(this, value);
	}
	template <typename T = int32_t> T get_Model() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42AD4))(this);
	}
	template <typename T = void> T set_Model(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42ADC))(this, value);
	}
	template <typename T = int32_t> T get_ItemID1() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42AE4))(this);
	}
	template <typename T = void> T set_ItemID1(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42AEC))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum1() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42AF4))(this);
	}
	template <typename T = void> T set_ItemNum1(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42AFC))(this, value);
	}
	template <typename T = int32_t> T get_ItemID2() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B04))(this);
	}
	template <typename T = void> T set_ItemID2(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B0C))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum2() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B14))(this);
	}
	template <typename T = void> T set_ItemNum2(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B1C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID3() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B24))(this);
	}
	template <typename T = void> T set_ItemID3(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B2C))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum3() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B34))(this);
	}
	template <typename T = void> T set_ItemNum3(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B3C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID4() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B44))(this);
	}
	template <typename T = void> T set_ItemID4(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B4C))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum4() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B54))(this);
	}
	template <typename T = void> T set_ItemNum4(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B5C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID5() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B64))(this);
	}
	template <typename T = void> T set_ItemID5(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B6C))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum5() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B74))(this);
	}
	template <typename T = void> T set_ItemNum5(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B7C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID6() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B84))(this);
	}
	template <typename T = void> T set_ItemID6(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B8C))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum6() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42B94))(this);
	}
	template <typename T = void> T set_ItemNum6(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42B9C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID7() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42BA4))(this);
	}
	template <typename T = void> T set_ItemID7(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42BAC))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum7() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42BB4))(this);
	}
	template <typename T = void> T set_ItemNum7(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42BBC))(this, value);
	}
	template <typename T = int32_t> T get_ItemID8() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42BC4))(this);
	}
	template <typename T = void> T set_ItemID8(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42BCC))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum8() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42BD4))(this);
	}
	template <typename T = void> T set_ItemNum8(int32_t value) {
		return ((T (*)(BRBoxConfig*, int32_t))(Il2CppBase() + 0x2D42BDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_OpenSoundName() {
		return ((T (*)(BRBoxConfig*))(Il2CppBase() + 0x2D42BE4))(this);
	}
	template <typename T = void> T set_OpenSoundName(Il2CppString* value) {
		return ((T (*)(BRBoxConfig*, Il2CppString*))(Il2CppBase() + 0x2D42BEC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRBoxConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D42BF4))(this, bytes, position);
	}

};

}
