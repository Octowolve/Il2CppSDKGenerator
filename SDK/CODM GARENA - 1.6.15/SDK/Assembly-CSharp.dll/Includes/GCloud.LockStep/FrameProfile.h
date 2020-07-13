#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class FrameProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "FrameProfile"));
	}

	template <typename T = uint32_t> T& frameID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& alreadyPeeked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& inputCount() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uint32_t> T& minInputSeqID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& maxInputSeqID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& lostInputCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& lostFrameCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& inputIntervalMS() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& recvIntervalMS() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& peekIntervalMS() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint16_t> T& recvTimeMS() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint16_t> T& peekTimeMS() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = uint16_t> T& inputQueueLen() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint16_t> T& inputQueueValidLen() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uint16_t> T& recvQueueLen() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint16_t> T& recvQueueValidLen() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uint16_t> T& peekQueueLen() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint16_t> T& peekQueueValidLen() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = uint16_t> T& inputSpeedMS() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint16_t> T& recvSpeedMS() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(FrameProfile*, uintptr_t))(Il2CppBase() + 0x46ABF34))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(FrameProfile*, uintptr_t))(Il2CppBase() + 0x46AC12C))(this, reader);
	}

};

}
