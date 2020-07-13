#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class StreamParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "StreamParser"));
	}

	template <typename T = Il2CppString*> T& _url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _streamType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _autoLoad() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _parser() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _loaded() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _substreams() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _chunks() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _events() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseStream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Events() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x4126B08))(this);
	}
	template <typename T = void> T LoadFile() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x4126C54))(this);
	}
	template <typename T = bool> T get_Loaded() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x4127068))(this);
	}
	template <typename T = uintptr_t> T get_Root() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x4127070))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SubStreams() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x4127088))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Chunks() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x41270A0))(this);
	}
	template <typename T = void> T ParseStream() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x41270B8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(StreamParser*))(Il2CppBase() + 0x41271F0))(this);
	}

};

}
