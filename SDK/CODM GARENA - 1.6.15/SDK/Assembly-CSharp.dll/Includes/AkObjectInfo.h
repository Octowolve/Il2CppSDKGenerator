#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkObjectInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4911484))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkObjectInfo*, uintptr_t))(Il2CppBase() + 0x4911518))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkObjectInfo*))(Il2CppBase() + 0x4911544))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkObjectInfo*))(Il2CppBase() + 0x49115AC))(this);
	}
	template <typename T = void> T set_objID(uint32_t value) {
		return ((T (*)(AkObjectInfo*, uint32_t))(Il2CppBase() + 0x4911734))(this, value);
	}
	template <typename T = uint32_t> T get_objID() {
		return ((T (*)(AkObjectInfo*))(Il2CppBase() + 0x49117E8))(this);
	}
	template <typename T = void> T set_parentID(uint32_t value) {
		return ((T (*)(AkObjectInfo*, uint32_t))(Il2CppBase() + 0x4911894))(this, value);
	}
	template <typename T = uint32_t> T get_parentID() {
		return ((T (*)(AkObjectInfo*))(Il2CppBase() + 0x4911948))(this);
	}
	template <typename T = void> T set_iDepth(int32_t value) {
		return ((T (*)(AkObjectInfo*, int32_t))(Il2CppBase() + 0x49119F4))(this, value);
	}
	template <typename T = int32_t> T get_iDepth() {
		return ((T (*)(AkObjectInfo*))(Il2CppBase() + 0x4911AA8))(this);
	}

};

}
