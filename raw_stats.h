/*
 * raw_stats.h: Include file used to display statistics in raw format.
 * (C) 1999-2025 by Sebastien Godard (sysstat <at> orange.fr)
 */

#ifndef _RAW_STATS_H
#define _RAW_STATS_H

#include "common.h"

/*
 ***************************************************************************
 * Prototypes for functions used to display statistics in raw format.
 ***************************************************************************
 */

__print_funct_t raw_print_cpu_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pcsw_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_irq_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_swap_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_paging_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_io_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_memory_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_ktables_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_queue_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_serial_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_disk_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_dev_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_edev_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_nfs_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_nfsd_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_sock_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_ip_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_eip_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_icmp_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_eicmp_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_tcp_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_etcp_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_udp_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_sock6_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_ip6_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_eip6_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_icmp6_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_eicmp6_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_net_udp6_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_cpufreq_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_fan_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_temp_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_in_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_huge_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_wghfreq_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_usb_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_filesystem_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_fchost_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_softnet_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_psicpu_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_psiio_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_psimem_stats
	(struct activity *, char *, int);
__print_funct_t raw_print_pwr_bat_stats
	(struct activity *, char *, int);

#endif /* _RAW_STATS_H */
