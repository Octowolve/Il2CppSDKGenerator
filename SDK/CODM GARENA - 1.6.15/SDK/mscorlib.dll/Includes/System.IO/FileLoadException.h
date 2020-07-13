#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class FileLoadException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "FileLoadException"));
	}

	template <typename T = int32_t> static T& Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& fileName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& fusionLog() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(FileLoadException*))(Il2CppBase() + 0x3FF7238))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(FileLoadException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FF7240))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FileLoadException*))(Il2CppBase() + 0x3FF7318))(this);
	}

};

}
