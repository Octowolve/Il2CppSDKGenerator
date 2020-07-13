#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Core {

class StreamUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Core", "StreamUtils"));
	}


	template <typename T = void> static T ReadFully(uintptr_t stream, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6BE68))(0, stream, buffer);
	}
	template <typename T = void> static T ReadFully_1(uintptr_t stream, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6BEA0))(0, stream, buffer, offset, count);
	}
	template <typename T = void> static T Copy(uintptr_t source, uintptr_t destination, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A6C0A0))(0, source, destination, buffer);
	}
	template <typename T = void> static T Copy_1(uintptr_t source, uintptr_t destination, Il2CppArray<uintptr_t>* buffer, uintptr_t progressHandler, uintptr_t updateInterval, uintptr_t sender, Il2CppString* name, int64_t fixedTarget) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, int64_t))(Il2CppBase() + 0x4A6C28C))(0, source, destination, buffer, progressHandler, updateInterval, sender, name, fixedTarget);
	}

};

}
