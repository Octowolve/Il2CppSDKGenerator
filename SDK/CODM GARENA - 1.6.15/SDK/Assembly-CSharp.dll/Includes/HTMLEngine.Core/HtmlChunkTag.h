#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class HtmlChunkTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "HtmlChunkTag"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& TAG_NAME_STOP_CHARS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ATTR_NAME_STOP_CHARS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ATTR_VALUE_STOP_CHARS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& Attrs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsClosing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsSingle() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTagSupported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnRelease() {
		return ((T (*)(HtmlChunkTag*))(Il2CppBase() + 0x4760784))(this);
	}
	template <typename T = Il2CppString*> T GetAttr(Il2CppString* attrName) {
		return ((T (*)(HtmlChunkTag*, Il2CppString*))(Il2CppBase() + 0x475AF54))(this, attrName);
	}
	template <typename T = bool> T ReadTag(uintptr_t reader) {
		return ((T (*)(HtmlChunkTag*, uintptr_t))(Il2CppBase() + 0x475FF44))(this, reader);
	}
	template <typename T = bool> T IsTagSupported() {
		return ((T (*)(HtmlChunkTag*))(Il2CppBase() + 0x47611E4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HtmlChunkTag*))(Il2CppBase() + 0x47615F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRelease() {
		return ((T (*)(HtmlChunkTag*))(Il2CppBase() + 0x4761928))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(HtmlChunkTag*))(Il2CppBase() + 0x476192C))(this);
	}

};

}
