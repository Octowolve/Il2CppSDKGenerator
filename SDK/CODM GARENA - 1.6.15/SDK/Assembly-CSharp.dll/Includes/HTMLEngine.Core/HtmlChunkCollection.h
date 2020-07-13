#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class HtmlChunkCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "HtmlChunkCollection"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnRelease() {
		return ((T (*)(HtmlChunkCollection*))(Il2CppBase() + 0x475F7B0))(this);
	}
	template <typename T = void> T Clear(bool releaseItems) {
		return ((T (*)(HtmlChunkCollection*, bool))(Il2CppBase() + 0x475F87C))(this, releaseItems);
	}
	template <typename T = void> T Read(uintptr_t reader) {
		return ((T (*)(HtmlChunkCollection*, uintptr_t))(Il2CppBase() + 0x475FA84))(this, reader);
	}

};

}
