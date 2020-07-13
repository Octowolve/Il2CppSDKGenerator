#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQPING
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_PING"));
	}

	template <typename T = uint32_t> T& LocalElapse() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& LastPing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& LastFps() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& LastSignalLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint16_t> T& Seq() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint16_t> T& LastPingTimes() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uint16_t> T& LastPingLostTimes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& LocalLogicElapse() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& LastLogicPing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SREQPING*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x50451F4))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x50453C8))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Serialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(C2SREQPING*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5045478))(this, P0, P1);
	}

};

}
