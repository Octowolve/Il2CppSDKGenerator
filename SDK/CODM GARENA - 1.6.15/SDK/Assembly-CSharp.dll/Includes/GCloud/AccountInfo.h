#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class AccountInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "AccountInfo"));
	}

	template <typename T = uintptr_t> T& Channel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& OpenId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& UserId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& Uid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tokenList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTokenLeftSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPayTokenLeftSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_TokenList() {
		return ((T (*)(AccountInfo*))(Il2CppBase() + 0x2A6BF94))(this);
	}
	template <typename T = int32_t> T GetTokenLeftSeconds(uintptr_t type) {
		return ((T (*)(AccountInfo*, uintptr_t))(Il2CppBase() + 0x2A6C044))(this, type);
	}
	template <typename T = int32_t> T GetPayTokenLeftSeconds() {
		return ((T (*)(AccountInfo*))(Il2CppBase() + 0x2A6C438))(this);
	}
	template <typename T = uintptr_t> T GetToken(uintptr_t type) {
		return ((T (*)(AccountInfo*, uintptr_t))(Il2CppBase() + 0x2A6C218))(this, type);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AccountInfo*))(Il2CppBase() + 0x2A6C500))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(AccountInfo*, uintptr_t))(Il2CppBase() + 0x2A6C638))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(AccountInfo*, uintptr_t))(Il2CppBase() + 0x2A6C794))(this, reader);
	}

};

}
