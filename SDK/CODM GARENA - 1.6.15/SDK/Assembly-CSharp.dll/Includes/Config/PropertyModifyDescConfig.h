#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PropertyModifyDescConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PropertyModifyDescConfig"));
	}

	template <typename T = int32_t> T& PropertyType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& PropertyName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PropertySvrName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ProperyDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ProperyParamStr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& EffectParamOper() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_PropertyType() {
		return ((T (*)(PropertyModifyDescConfig*))(Il2CppBase() + 0x378476C))(this);
	}
	template <typename T = void> T set_PropertyType(int32_t value) {
		return ((T (*)(PropertyModifyDescConfig*, int32_t))(Il2CppBase() + 0x3784774))(this, value);
	}
	template <typename T = Il2CppString*> T get_PropertyName() {
		return ((T (*)(PropertyModifyDescConfig*))(Il2CppBase() + 0x378477C))(this);
	}
	template <typename T = void> T set_PropertyName(Il2CppString* value) {
		return ((T (*)(PropertyModifyDescConfig*, Il2CppString*))(Il2CppBase() + 0x3784784))(this, value);
	}
	template <typename T = Il2CppString*> T get_PropertySvrName() {
		return ((T (*)(PropertyModifyDescConfig*))(Il2CppBase() + 0x378478C))(this);
	}
	template <typename T = void> T set_PropertySvrName(Il2CppString* value) {
		return ((T (*)(PropertyModifyDescConfig*, Il2CppString*))(Il2CppBase() + 0x3784794))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProperyDesc() {
		return ((T (*)(PropertyModifyDescConfig*))(Il2CppBase() + 0x378479C))(this);
	}
	template <typename T = void> T set_ProperyDesc(Il2CppString* value) {
		return ((T (*)(PropertyModifyDescConfig*, Il2CppString*))(Il2CppBase() + 0x37847A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProperyParamStr() {
		return ((T (*)(PropertyModifyDescConfig*))(Il2CppBase() + 0x37847AC))(this);
	}
	template <typename T = void> T set_ProperyParamStr(Il2CppString* value) {
		return ((T (*)(PropertyModifyDescConfig*, Il2CppString*))(Il2CppBase() + 0x37847B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectParamOper() {
		return ((T (*)(PropertyModifyDescConfig*))(Il2CppBase() + 0x37847BC))(this);
	}
	template <typename T = void> T set_EffectParamOper(Il2CppString* value) {
		return ((T (*)(PropertyModifyDescConfig*, Il2CppString*))(Il2CppBase() + 0x37847C4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PropertyModifyDescConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37847CC))(this, bytes, position);
	}

};

}
