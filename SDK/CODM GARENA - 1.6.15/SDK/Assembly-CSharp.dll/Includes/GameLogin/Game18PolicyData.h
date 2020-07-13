#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class Game18PolicyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "Game18PolicyData"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& birthdayYear() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& birthdayMonth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& birthdayDay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& idcard() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& idcardDateYear() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& idcardDateMonth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& idcardDateDay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& address() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& email() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Copy(Il2CppString* name, Il2CppString* birthdayYear, Il2CppString* birthdayMonth, Il2CppString* birthdayDay, Il2CppString* idcard, Il2CppString* idcardDateYear, Il2CppString* idcardDateMonth, Il2CppString* idcardDateDay, Il2CppString* address, Il2CppString* email) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33D4E34))(0, name, birthdayYear, birthdayMonth, birthdayDay, idcard, idcardDateYear, idcardDateMonth, idcardDateDay, address, email);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D55EC))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D559C))(this, value);
	}
	template <typename T = Il2CppString*> T get_birthdayYear() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D55F4))(this);
	}
	template <typename T = void> T set_birthdayYear(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_birthdayMonth() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D55FC))(this);
	}
	template <typename T = void> T set_birthdayMonth(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_birthdayDay() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D5604))(this);
	}
	template <typename T = void> T set_birthdayDay(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_idcard() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D560C))(this);
	}
	template <typename T = void> T set_idcard(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_idcardDateYear() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D5614))(this);
	}
	template <typename T = void> T set_idcardDateYear(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_idcardDateMonth() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D561C))(this);
	}
	template <typename T = void> T set_idcardDateMonth(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_idcardDateDay() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D5624))(this);
	}
	template <typename T = void> T set_idcardDateDay(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_address() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D562C))(this);
	}
	template <typename T = void> T set_address(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_email() {
		return ((T (*)(Game18PolicyData*))(Il2CppBase() + 0x33D5634))(this);
	}
	template <typename T = void> T set_email(Il2CppString* value) {
		return ((T (*)(Game18PolicyData*, Il2CppString*))(Il2CppBase() + 0x33D55E4))(this, value);
	}

};

}
