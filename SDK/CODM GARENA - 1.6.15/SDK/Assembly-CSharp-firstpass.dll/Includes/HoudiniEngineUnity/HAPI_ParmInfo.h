#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIParmInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_ParmInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& parentId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& childIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& typeInfoSH() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& permissions() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& tagCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& choiceListType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& choiceCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& labelSH() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& templateNameSH() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& helpSH() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& hasMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& hasMax() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& hasUIMin() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& hasUIMax() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = float> T& min() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& max() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& UIMin() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& UIMax() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& invisible() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& disabled() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& spare() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = bool> T& joinNext() {
		return *(T*)((uintptr_t)this + 0x4F);
	}
	template <typename T = bool> T& labelNone() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& intValuesIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& floatValuesIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& stringValuesIndex() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& choiceIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& inputNodeType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& inputNodeFlag() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isChildOfMultiParm() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& instanceNum() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& instanceLength() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& instanceCount() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& instanceStartOffset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& rampType() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = bool> T isInt() {
		return ((T (*)(HAPIParmInfo*))(Il2CppBase() + 0x4C60124))(this);
	}
	template <typename T = bool> T isFloat() {
		return ((T (*)(HAPIParmInfo*))(Il2CppBase() + 0x4C60138))(this);
	}
	template <typename T = bool> T isString() {
		return ((T (*)(HAPIParmInfo*))(Il2CppBase() + 0x4C60150))(this);
	}
	template <typename T = bool> T isPath() {
		return ((T (*)(HAPIParmInfo*))(Il2CppBase() + 0x4C60168))(this);
	}
	template <typename T = bool> T isNode() {
		return ((T (*)(HAPIParmInfo*))(Il2CppBase() + 0x4C60180))(this);
	}
	template <typename T = bool> T isNonValue() {
		return ((T (*)(HAPIParmInfo*))(Il2CppBase() + 0x4C60194))(this);
	}

};

}
