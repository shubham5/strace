static int
arch_set_scno(struct tcb *tcp, long scno)
{
	or1k_regs.gpr[11] = scno;
	return set_regs(tcp->pid);
}
