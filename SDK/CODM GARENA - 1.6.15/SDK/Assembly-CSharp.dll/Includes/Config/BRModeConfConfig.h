#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRModeConfConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DefaultBagPosNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxPickUpHDis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxPickUpVDis() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Scope1x() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Scope4x() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& EnergyCostMs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& HpRegainSpeedMs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& HpRegianNeedEnergy1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& HpRegianSpeed1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& HpRegianNeedEnergy2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& HpRegianSpeed2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& HpRegianNeedEnergy3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& HpRegianSpeed3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& RunSpeedScale3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& HpRegianSpeed4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& RunSpeedScale4() {
		return *(T*)((uintptr_t)this + 0x4C);
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

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D50224))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5036C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5040C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50414))(this, value);
	}
	template <typename T = int32_t> T get_DefaultBagPosNum() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5041C))(this);
	}
	template <typename T = void> T set_DefaultBagPosNum(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50424))(this, value);
	}
	template <typename T = float> T get_MaxPickUpHDis() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5042C))(this);
	}
	template <typename T = void> T set_MaxPickUpHDis(float value) {
		return ((T (*)(BRModeConfConfig*, float))(Il2CppBase() + 0x2D50434))(this, value);
	}
	template <typename T = int32_t> T get_MaxPickUpVDis() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5043C))(this);
	}
	template <typename T = void> T set_MaxPickUpVDis(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50444))(this, value);
	}
	template <typename T = int32_t> T get_Scope1x() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5044C))(this);
	}
	template <typename T = void> T set_Scope1x(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50454))(this, value);
	}
	template <typename T = int32_t> T get_Scope4x() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5045C))(this);
	}
	template <typename T = void> T set_Scope4x(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50464))(this, value);
	}
	template <typename T = int32_t> T get_EnergyCostMs() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5046C))(this);
	}
	template <typename T = void> T set_EnergyCostMs(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50474))(this, value);
	}
	template <typename T = int32_t> T get_HpRegainSpeedMs() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5047C))(this);
	}
	template <typename T = void> T set_HpRegainSpeedMs(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50484))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianNeedEnergy1() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5048C))(this);
	}
	template <typename T = void> T set_HpRegianNeedEnergy1(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50494))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianSpeed1() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5049C))(this);
	}
	template <typename T = void> T set_HpRegianSpeed1(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D504A4))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianNeedEnergy2() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D504AC))(this);
	}
	template <typename T = void> T set_HpRegianNeedEnergy2(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D504B4))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianSpeed2() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D504BC))(this);
	}
	template <typename T = void> T set_HpRegianSpeed2(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D504C4))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianNeedEnergy3() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D504CC))(this);
	}
	template <typename T = void> T set_HpRegianNeedEnergy3(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D504D4))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianSpeed3() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D504DC))(this);
	}
	template <typename T = void> T set_HpRegianSpeed3(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D504E4))(this, value);
	}
	template <typename T = float> T get_RunSpeedScale3() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D504EC))(this);
	}
	template <typename T = void> T set_RunSpeedScale3(float value) {
		return ((T (*)(BRModeConfConfig*, float))(Il2CppBase() + 0x2D504F4))(this, value);
	}
	template <typename T = int32_t> T get_HpRegianSpeed4() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D504FC))(this);
	}
	template <typename T = void> T set_HpRegianSpeed4(int32_t value) {
		return ((T (*)(BRModeConfConfig*, int32_t))(Il2CppBase() + 0x2D50504))(this, value);
	}
	template <typename T = float> T get_RunSpeedScale4() {
		return ((T (*)(BRModeConfConfig*))(Il2CppBase() + 0x2D5050C))(this);
	}
	template <typename T = void> T set_RunSpeedScale4(float value) {
		return ((T (*)(BRModeConfConfig*, float))(Il2CppBase() + 0x2D50514))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5051C))(this, bytes, position);
	}

};

}
