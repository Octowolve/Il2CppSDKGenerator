#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class StackFrame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "StackFrame"));
	}

	template <typename T = int32_t> static T& OFFSET_UNKNOWN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ilOffset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& nativeOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& methodBase() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& fileName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& lineNumber() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& columnNumber() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& internalMethodName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> static T get_frame_info(int32_t skip, bool needFileInfo, uintptr_t* method, uintptr_t* iloffset, uintptr_t* native_offset, uintptr_t* file, uintptr_t* line, uintptr_t* column) {
		return ((T (*)(void *, int32_t, bool, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x366EDA4))(0, skip, needFileInfo, method, iloffset, native_offset, file, line, column);
	}
	template <typename T = int32_t> T GetFileLineNumber() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EE5C))(this);
	}
	template <typename T = Il2CppString*> T GetFileName() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EE64))(this);
	}
	template <typename T = Il2CppString*> T GetSecureFileName() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EE6C))(this);
	}
	template <typename T = int32_t> T GetILOffset() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EFA8))(this);
	}
	template <typename T = uintptr_t> T GetMethod() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EFB0))(this);
	}
	template <typename T = int32_t> T GetNativeOffset() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EFB8))(this);
	}
	template <typename T = Il2CppString*> T GetInternalMethodName() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EFC0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StackFrame*))(Il2CppBase() + 0x366EFC8))(this);
	}

};

}
