#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class OverloadMethodWrap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "OverloadMethodWrap"));
	}

	template <typename T = uintptr_t> T& translator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& targetType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& checkArray() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& castArray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& inPosArray() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& outPosArray() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& isOptionalArray() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& defaultValueArray() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isVoid() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& luaStackPosStart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& targetNeeded() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& args() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& refPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& paramsType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& HasDefalutValue() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = bool> T get_HasDefalutValue() {
		return ((T (*)(OverloadMethodWrap*))(Il2CppBase() + 0xF47F18))(this);
	}
	template <typename T = void> T set_HasDefalutValue(bool value) {
		return ((T (*)(OverloadMethodWrap*, bool))(Il2CppBase() + 0xF5B27C))(this, value);
	}
	template <typename T = void> T Init(uintptr_t objCheckers, uintptr_t objCasters) {
		return ((T (*)(OverloadMethodWrap*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF49FCC))(this, objCheckers, objCasters);
	}
	template <typename T = bool> T Check(uintptr_t L) {
		return ((T (*)(OverloadMethodWrap*, uintptr_t))(Il2CppBase() + 0xF48838))(this, L);
	}
	template <typename T = int32_t> T Call(uintptr_t L) {
		return ((T (*)(OverloadMethodWrap*, uintptr_t))(Il2CppBase() + 0xF47F20))(this, L);
	}

};

}
