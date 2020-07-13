#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAttributeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AttributeData"));
	}

	template <typename T = uintptr_t> T& _attributeInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _attributeType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _intValues() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _floatValues() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _stringValues() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _attributeState() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T IsColorAttribute() {
		return ((T (*)(HEUAttributeData*))(Il2CppBase() + 0x4C651D8))(this);
	}
	template <typename T = void> T CopyValuesTo(uintptr_t destAttrData) {
		return ((T (*)(HEUAttributeData*, uintptr_t))(Il2CppBase() + 0x4C65298))(this, destAttrData);
	}

};

}
