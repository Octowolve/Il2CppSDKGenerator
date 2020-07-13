#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class ScoreModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "ScoreModel"));
	}

	template <typename T = int32_t> T& m_TargetScore() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_GuarderScore() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_TraitorScore() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_SecondaryScore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_GuardSurvivorCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_TraitorSurvivorCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_TotalGuarderPlayerCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_TotalTraitorPlayerCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_TargetScore() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2B1B7EC))(this);
	}
	template <typename T = void> T set_TargetScore(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2AF1E28))(this, value);
	}
	template <typename T = int32_t> T get_GuarderScore() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2AF230C))(this);
	}
	template <typename T = void> T set_GuarderScore(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2AF1E18))(this, value);
	}
	template <typename T = int32_t> T get_TraitorScore() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2AF2314))(this);
	}
	template <typename T = void> T set_TraitorScore(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2AF1E20))(this, value);
	}
	template <typename T = int32_t> T get_SecondaryScore() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2B1B7F4))(this);
	}
	template <typename T = void> T set_SecondaryScore(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2B1B7FC))(this, value);
	}
	template <typename T = int32_t> T get_GuardSurvivorCount() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2B1B804))(this);
	}
	template <typename T = void> T set_GuardSurvivorCount(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2B1B80C))(this, value);
	}
	template <typename T = int32_t> T get_TraitorSurvivorCount() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2B1B814))(this);
	}
	template <typename T = void> T set_TraitorSurvivorCount(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2B1B81C))(this, value);
	}
	template <typename T = int32_t> T get_TotalGuarderPlayerCount() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2B1B824))(this);
	}
	template <typename T = void> T set_TotalGuarderPlayerCount(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2B1B82C))(this, value);
	}
	template <typename T = int32_t> T get_TotalTraitorPlayerCount() {
		return ((T (*)(ScoreModel*))(Il2CppBase() + 0x2B1B834))(this);
	}
	template <typename T = void> T set_TotalTraitorPlayerCount(int32_t value) {
		return ((T (*)(ScoreModel*, int32_t))(Il2CppBase() + 0x2B1B83C))(this, value);
	}

};

}
