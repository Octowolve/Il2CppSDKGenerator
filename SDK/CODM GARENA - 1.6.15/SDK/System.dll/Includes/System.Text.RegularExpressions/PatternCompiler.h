#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class PatternCompiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "PatternCompiler"));
	}

	template <typename T = uintptr_t> T& pgm() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uint16_t> static T EncodeOp(uintptr_t op, uintptr_t flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADAC08))(0, op, flags);
	}
	template <typename T = uintptr_t> T GetMachineFactory() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADAC14))(this);
	}
	template <typename T = void> T EmitFalse() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADAD28))(this);
	}
	template <typename T = void> T EmitTrue() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADAD34))(this);
	}
	template <typename T = void> T EmitCount(int32_t count) {
		return ((T (*)(PatternCompiler*, int32_t))(Il2CppBase() + 0x4ADAD3C))(this, count);
	}
	template <typename T = void> T EmitCharacter(char c, bool negate, bool ignore, bool reverse) {
		return ((T (*)(PatternCompiler*, char, bool, bool, bool))(Il2CppBase() + 0x4ADAE28))(this, c, negate, ignore, reverse);
	}
	template <typename T = void> T EmitCategory(uintptr_t cat, bool negate, bool reverse) {
		return ((T (*)(PatternCompiler*, uintptr_t, bool, bool))(Il2CppBase() + 0x4ADAF60))(this, cat, negate, reverse);
	}
	template <typename T = void> T EmitNotCategory(uintptr_t cat, bool negate, bool reverse) {
		return ((T (*)(PatternCompiler*, uintptr_t, bool, bool))(Il2CppBase() + 0x4ADAFA4))(this, cat, negate, reverse);
	}
	template <typename T = void> T EmitRange(char lo, char hi, bool negate, bool ignore, bool reverse) {
		return ((T (*)(PatternCompiler*, char, char, bool, bool, bool))(Il2CppBase() + 0x4ADAFE8))(this, lo, hi, negate, ignore, reverse);
	}
	template <typename T = void> T EmitSet(char lo, uintptr_t set, bool negate, bool ignore, bool reverse) {
		return ((T (*)(PatternCompiler*, char, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x4ADB04C))(this, lo, set, negate, ignore, reverse);
	}
	template <typename T = void> T EmitString(Il2CppString* str, bool ignore, bool reverse) {
		return ((T (*)(PatternCompiler*, Il2CppString*, bool, bool))(Il2CppBase() + 0x4ADB160))(this, str, ignore, reverse);
	}
	template <typename T = void> T EmitPosition(uintptr_t pos) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB224))(this, pos);
	}
	template <typename T = void> T EmitOpen(int32_t gid) {
		return ((T (*)(PatternCompiler*, int32_t))(Il2CppBase() + 0x4ADB24C))(this, gid);
	}
	template <typename T = void> T EmitClose(int32_t gid) {
		return ((T (*)(PatternCompiler*, int32_t))(Il2CppBase() + 0x4ADB274))(this, gid);
	}
	template <typename T = void> T EmitBalanceStart(int32_t gid, int32_t balance, bool capture, uintptr_t tail) {
		return ((T (*)(PatternCompiler*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x4ADB29C))(this, gid, balance, capture, tail);
	}
	template <typename T = void> T EmitBalance() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADB47C))(this);
	}
	template <typename T = void> T EmitReference(int32_t gid, bool ignore, bool reverse) {
		return ((T (*)(PatternCompiler*, int32_t, bool, bool))(Il2CppBase() + 0x4ADB484))(this, gid, ignore, reverse);
	}
	template <typename T = void> T EmitIfDefined(int32_t gid, uintptr_t tail) {
		return ((T (*)(PatternCompiler*, int32_t, uintptr_t))(Il2CppBase() + 0x4ADB4C8))(this, gid, tail);
	}
	template <typename T = void> T EmitSub(uintptr_t tail) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB50C))(this, tail);
	}
	template <typename T = void> T EmitTest(uintptr_t yes, uintptr_t tail) {
		return ((T (*)(PatternCompiler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADB53C))(this, yes, tail);
	}
	template <typename T = void> T EmitBranch(uintptr_t next) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB588))(this, next);
	}
	template <typename T = void> T EmitJump(uintptr_t target) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB5B8))(this, target);
	}
	template <typename T = void> T EmitRepeat(int32_t min, int32_t max, bool lazy, uintptr_t until) {
		return ((T (*)(PatternCompiler*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x4ADB5E8))(this, min, max, lazy, until);
	}
	template <typename T = void> T EmitUntil(uintptr_t repeat) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB660))(this, repeat);
	}
	template <typename T = void> T EmitFastRepeat(int32_t min, int32_t max, bool lazy, uintptr_t tail) {
		return ((T (*)(PatternCompiler*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x4ADB7A4))(this, min, max, lazy, tail);
	}
	template <typename T = void> T EmitIn(uintptr_t tail) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB81C))(this, tail);
	}
	template <typename T = void> T EmitAnchor(bool reverse, int32_t offset, uintptr_t tail) {
		return ((T (*)(PatternCompiler*, bool, int32_t, uintptr_t))(Il2CppBase() + 0x4ADB84C))(this, reverse, offset, tail);
	}
	template <typename T = void> T EmitInfo(int32_t count, int32_t min, int32_t max) {
		return ((T (*)(PatternCompiler*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4ADB89C))(this, count, min, max);
	}
	template <typename T = uintptr_t> T NewLink() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADB908))(this);
	}
	template <typename T = void> T ResolveLink(uintptr_t lref) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB680))(this, lref);
	}
	template <typename T = void> T EmitBranchEnd() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADB9DC))(this);
	}
	template <typename T = void> T EmitAlternationEnd() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADB9E0))(this);
	}
	template <typename T = uintptr_t> static T MakeFlags(bool negate, bool ignore, bool reverse, bool lazy) {
		return ((T (*)(void *, bool, bool, bool, bool))(Il2CppBase() + 0x4ADAF24))(0, negate, ignore, reverse, lazy);
	}
	template <typename T = void> T Emit(uintptr_t op) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADAD30))(this, op);
	}
	template <typename T = void> T Emit_1(uintptr_t op, uintptr_t flags) {
		return ((T (*)(PatternCompiler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADAF54))(this, op, flags);
	}
	template <typename T = void> T Emit_2(uint16_t word) {
		return ((T (*)(PatternCompiler*, uint16_t))(Il2CppBase() + 0x4ADAD64))(this, word);
	}
	template <typename T = int32_t> T get_CurrentAddress() {
		return ((T (*)(PatternCompiler*))(Il2CppBase() + 0x4ADB99C))(this);
	}
	template <typename T = void> T BeginLink(uintptr_t lref) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB314))(this, lref);
	}
	template <typename T = void> T EmitLink(uintptr_t lref) {
		return ((T (*)(PatternCompiler*, uintptr_t))(Il2CppBase() + 0x4ADB3BC))(this, lref);
	}

};

}
