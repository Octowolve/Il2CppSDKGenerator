#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkExternalSourceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkExternalSourceInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48FEA08))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkExternalSourceInfo*, uintptr_t))(Il2CppBase() + 0x48FEA9C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FEAC8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FEB30))(this);
	}
	template <typename T = void> T set_iExternalSrcCookie(uint32_t value) {
		return ((T (*)(AkExternalSourceInfo*, uint32_t))(Il2CppBase() + 0x48FECB8))(this, value);
	}
	template <typename T = uint32_t> T get_iExternalSrcCookie() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FED6C))(this);
	}
	template <typename T = void> T set_idCodec(uint32_t value) {
		return ((T (*)(AkExternalSourceInfo*, uint32_t))(Il2CppBase() + 0x48FEE18))(this, value);
	}
	template <typename T = uint32_t> T get_idCodec() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FEECC))(this);
	}
	template <typename T = void> T set_szFile(Il2CppString* value) {
		return ((T (*)(AkExternalSourceInfo*, Il2CppString*))(Il2CppBase() + 0x48FEF78))(this, value);
	}
	template <typename T = Il2CppString*> T get_szFile() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FF02C))(this);
	}
	template <typename T = void> T set_pInMemory(uintptr_t value) {
		return ((T (*)(AkExternalSourceInfo*, uintptr_t))(Il2CppBase() + 0x48FF0D8))(this, value);
	}
	template <typename T = uintptr_t> T get_pInMemory() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FF18C))(this);
	}
	template <typename T = void> T set_uiMemorySize(uint32_t value) {
		return ((T (*)(AkExternalSourceInfo*, uint32_t))(Il2CppBase() + 0x48FF238))(this, value);
	}
	template <typename T = uint32_t> T get_uiMemorySize() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FF2EC))(this);
	}
	template <typename T = void> T set_idFile(uint32_t value) {
		return ((T (*)(AkExternalSourceInfo*, uint32_t))(Il2CppBase() + 0x48FF398))(this, value);
	}
	template <typename T = uint32_t> T get_idFile() {
		return ((T (*)(AkExternalSourceInfo*))(Il2CppBase() + 0x48FF44C))(this);
	}

};

}
