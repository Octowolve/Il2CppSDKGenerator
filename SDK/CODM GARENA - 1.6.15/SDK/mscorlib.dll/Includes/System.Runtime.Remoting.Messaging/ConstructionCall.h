#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class ConstructionCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ConstructionCall"));
	}

	template <typename T = uintptr_t> T& _activator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _activationAttributes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _contextProperties() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _activationType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _activationTypeName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isContextOk() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map20() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T InitDictionary() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B33394))(this);
	}
	template <typename T = void> T set_IsContextOk(bool value) {
		return ((T (*)(ConstructionCall*, bool))(Il2CppBase() + 0x4B1C06C))(this, value);
	}
	template <typename T = uintptr_t> T get_ActivationType() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B33560))(this);
	}
	template <typename T = Il2CppString*> T get_ActivationTypeName() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B33654))(this);
	}
	template <typename T = uintptr_t> T get_Activator() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B3365C))(this);
	}
	template <typename T = void> T set_Activator(uintptr_t value) {
		return ((T (*)(ConstructionCall*, uintptr_t))(Il2CppBase() + 0x4B1C064))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CallSiteActivationAttributes() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B33664))(this);
	}
	template <typename T = void> T SetActivationAttributes(Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(ConstructionCall*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B1C094))(this, attributes);
	}
	template <typename T = uintptr_t> T get_ContextProperties() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B3366C))(this);
	}
	template <typename T = void> T InitMethodProperty(Il2CppString* key, uintptr_t value) {
		return ((T (*)(ConstructionCall*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B3370C))(this, key, value);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ConstructionCall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B342A4))(this, info, context);
	}
	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(ConstructionCall*))(Il2CppBase() + 0x4B349FC))(this);
	}

};

}
