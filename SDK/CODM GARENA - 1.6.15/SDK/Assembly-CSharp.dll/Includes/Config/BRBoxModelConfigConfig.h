#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRBoxModelConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRBoxModelConfigConfig"));
	}

	template <typename T = int32_t> T& ModelID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& BaseLocalPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BaseLocalRotation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& BaseSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FrontLocalPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& FrontLocalRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FrontSize() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D42FE4))(this);
	}
	template <typename T = int32_t> T get_ModelID() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D43084))(this);
	}
	template <typename T = void> T set_ModelID(int32_t value) {
		return ((T (*)(BRBoxModelConfigConfig*, int32_t))(Il2CppBase() + 0x2D4308C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BaseLocalPos() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D43094))(this);
	}
	template <typename T = void> T set_BaseLocalPos(Il2CppString* value) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D4309C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BaseLocalRotation() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D430A4))(this);
	}
	template <typename T = void> T set_BaseLocalRotation(Il2CppString* value) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D430AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_BaseSize() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D430B4))(this);
	}
	template <typename T = void> T set_BaseSize(Il2CppString* value) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D430BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FrontLocalPos() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D430C4))(this);
	}
	template <typename T = void> T set_FrontLocalPos(Il2CppString* value) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D430CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FrontLocalRotation() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D430D4))(this);
	}
	template <typename T = void> T set_FrontLocalRotation(Il2CppString* value) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D430DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_FrontSize() {
		return ((T (*)(BRBoxModelConfigConfig*))(Il2CppBase() + 0x2D430E4))(this);
	}
	template <typename T = void> T set_FrontSize(Il2CppString* value) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D430EC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRBoxModelConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D430F4))(this, bytes, position);
	}

};

}
