#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkChannelEmitterArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkChannelEmitterArray"));
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
		return ((T (*)(AkChannelEmitterArray*))(Il2CppBase() + 0x48F85B8))(this);
	}
	template <typename T = void> T set_Count(uint32_t value) {
		return ((T (*)(AkChannelEmitterArray*, uint32_t))(Il2CppBase() + 0x48F85B0))(this, value);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkChannelEmitterArray*))(Il2CppBase() + 0x48F85C0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkChannelEmitterArray*))(Il2CppBase() + 0x48F86D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AkChannelEmitterArray*))(Il2CppBase() + 0x48F8734))(this);
	}
	template <typename T = void> T Add(Il2CppVector3 in_Pos, Il2CppVector3 in_Forward, Il2CppVector3 in_Top, uint32_t in_ChannelMask) {
		return ((T (*)(AkChannelEmitterArray*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uint32_t))(Il2CppBase() + 0x48F8748))(this, in_Pos, in_Forward, in_Top, in_ChannelMask);
	}

};

}
