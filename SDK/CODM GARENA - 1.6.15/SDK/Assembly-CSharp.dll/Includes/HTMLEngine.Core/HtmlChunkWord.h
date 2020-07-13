#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class HtmlChunkWord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "HtmlChunkWord"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadWord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T ReadWord(uintptr_t reader) {
		return ((T (*)(HtmlChunkWord*, uintptr_t))(Il2CppBase() + 0x476047C))(this, reader);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HtmlChunkWord*))(Il2CppBase() + 0x4761B64))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(HtmlChunkWord*))(Il2CppBase() + 0x4761CA4))(this);
	}

};

}
