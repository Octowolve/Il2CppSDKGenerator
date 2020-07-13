#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class StackTrace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "StackTrace"));
	}

	template <typename T = int32_t> static T& METHODS_TO_SKIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& frames() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& debug_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T init_frames(int32_t skipFrames, bool fNeedFileInfo) {
		return ((T (*)(StackTrace*, int32_t, bool))(Il2CppBase() + 0x366F274))(this, skipFrames, fNeedFileInfo);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_trace(uintptr_t e, int32_t skipFrames, bool fNeedFileInfo) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x366F8D8))(0, e, skipFrames, fNeedFileInfo);
	}
	template <typename T = int32_t> T get_FrameCount() {
		return ((T (*)(StackTrace*))(Il2CppBase() + 0x366F8E8))(this);
	}
	template <typename T = uintptr_t> T GetFrame(int32_t index) {
		return ((T (*)(StackTrace*, int32_t))(Il2CppBase() + 0x366F8FC))(this, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFrames() {
		return ((T (*)(StackTrace*))(Il2CppBase() + 0x366F970))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StackTrace*))(Il2CppBase() + 0x366F978))(this);
	}

};

}
