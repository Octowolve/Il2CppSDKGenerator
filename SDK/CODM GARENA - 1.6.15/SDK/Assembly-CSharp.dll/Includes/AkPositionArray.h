#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPositionArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPositionArray"));
	}

	template <typename T = uintptr_t> T& m_Buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& m_MaxCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_Count() {
		return ((T (*)(AkPositionArray*))(Il2CppBase() + 0x4917CD8))(this);
	}
	template <typename T = void> T set_Count(uint32_t value) {
		return ((T (*)(AkPositionArray*, uint32_t))(Il2CppBase() + 0x4917CD0))(this, value);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPositionArray*))(Il2CppBase() + 0x4917CE0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPositionArray*))(Il2CppBase() + 0x4917DF0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AkPositionArray*))(Il2CppBase() + 0x4917E54))(this);
	}
	template <typename T = void> T Add(Il2CppVector3 in_Pos, Il2CppVector3 in_Forward, Il2CppVector3 in_Top) {
		return ((T (*)(AkPositionArray*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4917E68))(this, in_Pos, in_Forward, in_Top);
	}

};

}
