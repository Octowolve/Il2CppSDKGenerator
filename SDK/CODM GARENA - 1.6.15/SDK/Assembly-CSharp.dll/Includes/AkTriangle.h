#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriangle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriangle"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22ADD38))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkTriangle*, uintptr_t))(Il2CppBase() + 0x22ADDCC))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22ADDF8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22ADE60))(this);
	}
	template <typename T = void> T set_point0(uintptr_t value) {
		return ((T (*)(AkTriangle*, uintptr_t))(Il2CppBase() + 0x22ADFE0))(this, value);
	}
	template <typename T = uintptr_t> T get_point0() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22AA734))(this);
	}
	template <typename T = void> T set_point1(uintptr_t value) {
		return ((T (*)(AkTriangle*, uintptr_t))(Il2CppBase() + 0x22AE108))(this, value);
	}
	template <typename T = uintptr_t> T get_point1() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22AAA5C))(this);
	}
	template <typename T = void> T set_point2(uintptr_t value) {
		return ((T (*)(AkTriangle*, uintptr_t))(Il2CppBase() + 0x22AE230))(this, value);
	}
	template <typename T = uintptr_t> T get_point2() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22AAB80))(this);
	}
	template <typename T = void> T set_textureID(uint32_t value) {
		return ((T (*)(AkTriangle*, uint32_t))(Il2CppBase() + 0x22AACA4))(this, value);
	}
	template <typename T = uint32_t> T get_textureID() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22AE358))(this);
	}
	template <typename T = void> T set_reflectorChannelMask(uint32_t value) {
		return ((T (*)(AkTriangle*, uint32_t))(Il2CppBase() + 0x22AAD50))(this, value);
	}
	template <typename T = uint32_t> T get_reflectorChannelMask() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22AE3FC))(this);
	}
	template <typename T = void> T set_strName(Il2CppString* value) {
		return ((T (*)(AkTriangle*, Il2CppString*))(Il2CppBase() + 0x22AADFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_strName() {
		return ((T (*)(AkTriangle*))(Il2CppBase() + 0x22AE4A0))(this);
	}

};

}
